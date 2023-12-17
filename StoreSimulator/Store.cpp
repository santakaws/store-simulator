#include "Store.h"
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>


Store::Store() {
}

Store::Store(std::string store_name, std::vector<Department*> departments)
{
	this->store_name = store_name;
	this->departments = departments;
}

void Store::add_department(Department* department)
{
	this->departments.push_back(department);
}

void Store::add_customer(Customer* customer)
{
	this->customers_in_store.push_back(customer);
}

void Store::delete_customer()
{
	for (int i = 0; i < this->customers_in_store.size(); i++) {
		if (time(NULL) - this->customers_in_store[i]->get_time_created() > this->customers_in_store[i]->get_interval()) {
			this->checkout(this->customers_in_store[i]);
			delete this->customers_in_store[i];
			this->customers_in_store.erase(this->customers_in_store.begin() + i);
			i--;
		}
	}
}

void Store::set_store_name(std::string store_name)
{
	this->store_name = store_name;
}

void Store::set_departments(std::vector<Department*> departments)
{
	this->departments = departments;
}

void Store::set_prices(std::unordered_map<std::string, double> prices)
{
	this->prices = prices;
}

std::vector<Department*> Store::get_departments() {
	return this->departments;
}

std::string Store::get_store_name()
{
	return this->store_name;
}

void Store::customer_actions()
{
	std::srand(time(NULL));
	for (Customer* cust : this->customers_in_store) {
		if (std::rand() % 2 == 0) {
			cust->shop(this->departments);
		}
	}
}

void Store::checkout(Customer* customer)
{
	double total = 0;
	for (auto item : customer->get_shopping_cart()) {
		total = prices[item.first] * item.second;
	}
	std::cout << customer->get_full_name() + " spent $" << std::fixed << std::setprecision(2) << total << "\n";
	this->earnings += total;
}

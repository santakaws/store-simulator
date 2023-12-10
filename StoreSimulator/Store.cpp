#include "Store.h"
#include <vector>
#include <string>
#include <iostream>


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
	//while (true) {
		for (auto it = this->customers_in_store.begin(); it != this->customers_in_store.end(); it++) {
			if (time(NULL) - (*it)->get_time_created() > (*it)->get_interval()) {
				std::cout << "Customer: " << (*it)->get_full_name() << " left the store!!!!!!!!!!!!!!!!!!!!!!!!!\n";
				delete* it;
				customers_in_store.erase(it);
				break;
			}
		}
	//}
}

void Store::set_store_name(std::string store_name)
{
	this->store_name = store_name;
}

void Store::set_departments(std::vector<Department*> departments)
{
	this->departments = departments;
}

std::vector<Department*> Store::get_departments() {
	return this->departments;
}

std::string Store::get_store_name()
{
	return this->store_name;
}

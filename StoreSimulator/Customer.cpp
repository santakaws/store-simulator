#include "Customer.h"
#include <iostream>

Customer::Customer(std::string first_name, std::string last_name, int interval)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->interval = interval;
	this->time_created = time(NULL);

	std::cout << "Customer: " << this->get_full_name() << " entered the store\n";
}

Customer::~Customer()
{
	std::cout << "Customer: " << this->get_full_name() << " left the store!!!!!!!!!!!!!!!!!!!!!!!!!\n";
}

int Customer::get_interval()
{
	return this->interval;
}

std::time_t Customer::get_time_created()
{
	return this->time_created;
}

std::string Customer::get_full_name()
{
	return this->first_name + " " + this->last_name;
}

std::unordered_map<std::string, int> Customer::get_shopping_list()
{
	return this->shopping_list;
}

std::unordered_map<std::string, int> Customer::get_shopping_cart()
{
	return this->shopping_cart;
}

void Customer::set_interval(int interval)
{
	this->interval = interval;
}

void Customer::shop(std::vector<Department*> departments)
{
	for (Department* dept : departments) {
		for (auto item : dept->get_inventory()) {
			if (this->shopping_list.count(item.first) != 0) {
				if (dept->subtract_quantity(item.first, this->shopping_list[item.first])) {
					shopping_cart[item.first] = this->shopping_list[item.first];
					std::cout << this->first_name + " " + this->last_name + " added " + item.first + " to their cart\n";
				}
				this->shopping_list.erase(item.first);
			}
		}
	}
}

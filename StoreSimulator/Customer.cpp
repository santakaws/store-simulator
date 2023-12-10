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

void Customer::set_interval(int interval)
{
	this->interval = interval;
}
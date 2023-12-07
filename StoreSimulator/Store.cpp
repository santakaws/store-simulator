#include "Store.h"
#include <vector>
#include <string>


Store::Store() {
}

Store::Store(std::string store_name, std::vector<Department> departments)
{
	this->store_name = store_name;
	this->departments = departments;
}

void Store::add_department(Department department)
{
	this->departments.push_back(department);
}

void Store::set_store_name(std::string store_name)
{
	this->store_name = store_name;
}

void Store::set_departments(std::vector<Department> departments)
{
	this->departments = departments;
}

std::vector<Department> Store::get_departments() {
	return this->departments;
}

std::string Store::get_store_name()
{
	return this->store_name;
}

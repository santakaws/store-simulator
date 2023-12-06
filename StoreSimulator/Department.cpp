#include "Department.h"
#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>


Department::Department()
{
}

Department::Department(std::string department_name, std::vector<Employee> employees, std::unordered_map<std::string, int> inventory) {
	this->department_name = department_name;
	this->employees = employees;
	this->inventory = inventory;
}

std::string Department::get_department_name() {
	return this->department_name;
}

void Department::add_quantity(std::string item_name, int amount) {
	if (this->inventory.count(item_name) > 0) {
		this->inventory[item_name] += amount;
	}
	else {
		std::cout << "Item does not exist";
	}
}



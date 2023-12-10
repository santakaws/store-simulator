#include "Department.h"
#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>


Department::Department()
{
}

Department::Department(std::string department_name, std::vector<Employee*> employees, std::unordered_map<std::string, int> inventory) {
	this->department_name = department_name;
	this->employees = employees;
	this->inventory = inventory;
}

std::string Department::get_department_name() {
	return this->department_name;
}

std::vector<Employee*> Department::get_employee_list()
{
	return this->employees;
}

std::unordered_map<std::string, int> Department::get_inventory()
{
	return this->inventory;
}

void Department::add_quantity(std::string item_name, int amount) {
	if (this->inventory.count(item_name) > 0) {
		this->inventory[item_name] += amount;
	}
	else {
		std::cout << "Item does not exist\n";
	}
}

void Department::subtract_quantity(std::string item_name, int amount)
{
	if (this->inventory.count(item_name) > 0) {
		if (this->inventory[item_name] -= amount >= 0) {
			this->inventory[item_name] -= amount;
		}
		else {
			std::cout << "Not enough quantity\n";
		}
	}
	else {
		std::cout << "Item does not exist\n";
	}
}

void Department::add_item(std::string product_name, int quantity)
{
	this->inventory[product_name] = quantity;
}

void Department::add_employee(Employee* employee)
{
	this->employees.push_back(employee);
}

void Department::set_department_name(std::string department_name)
{
	this->department_name = department_name;
}

void Department::set_employees(std::vector<Employee*> employees)
{
	this->employees = employees;
}

void Department::set_inventory(std::unordered_map<std::string, int> new_inventory)
{
	this->inventory = new_inventory;
}



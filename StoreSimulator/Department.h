#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include <vector>
#include <unordered_map>
#include "Employee.h"

class Department
{
public:
	Department();
	Department(std::string department_name, std::vector<Employee> employees, std::unordered_map<std::string, int> inventory);
	std::string get_department_name();
	std::vector<Employee> get_employee_list();
	std::unordered_map<std::string, int> get_inventory();
	void add_quantity(std::string item_name, int amount);
	void subtract_quantity(std::string item_name, int amount);
	void add_item(std::string item_name, int quantity);
	void add_employee(Employee employee);
	void set_department_name(std::string department_name);
	void set_employees(std::vector<Employee> employees);
	void set_inventory(std::unordered_map<std::string, int> new_inventory);
private:
	std::string department_name;
	std::vector<Employee> employees;
	std::unordered_map<std::string, int> inventory;
};

#endif



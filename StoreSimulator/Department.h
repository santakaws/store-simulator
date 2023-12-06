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
	void add_quantity(std::string product_name, int ammount);
	void subtract_quantity(std::string product_name, int ammount);
	void add_product(std::string product_name, int quantity);
	void add_employee(Employee employee);
	void set_employees(std::vector<Employee>);
	void set_inventory(std::unordered_map<std::string, int> new_inventory);
private:
	std::string department_name;
	std::vector<Employee> employees;
	std::unordered_map<std::string, int> inventory;
};

#endif



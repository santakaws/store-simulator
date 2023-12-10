#ifndef STORE_H
#define STORE_H

#include <vector>
#include "Department.h"
#include "Customer.h"
class Store
{
public:
	Store();
	Store(std::string store_name, std::vector<Department*> departments);
	void add_department(Department* department);
	void add_customer(Customer* customer);
	void delete_customer();
	void set_store_name(std::string store_name);
	void set_departments(std::vector<Department*> departments);
	std::vector<Department*> get_departments();
	std::string get_store_name();
private:
	std::string store_name;
	std::vector<Department*> departments;
	std::vector<Customer*> customers_in_store;
};

#endif

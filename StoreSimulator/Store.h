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
	void set_prices(std::unordered_map<std::string, double> prices);
	std::vector<Department*> get_departments();
	std::string get_store_name();
	std::vector<Customer*> get_customers_in_store();
	void customer_actions();
	void checkout(Customer* customer);
private:
	std::string store_name;
	std::vector<Department*> departments;
	std::vector<Customer*> customers_in_store;
	std::unordered_map<std::string, double> prices;
	double earnings = 0;
};

#endif

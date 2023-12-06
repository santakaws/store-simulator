#ifndef STORE_H
#define STORE_H

#include <vector>
#include "Department.h"
class Store
{
public:
	Store();
	Store(std::vector<Department> departments);
	void add_department(Department department);
	void set_departments(std::vector<Department> departments);
	std::vector<Department> get_departments();
private:
	std::string store_name;
	std::vector<Department> departments;
};

#endif

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <string>

class Employee : public Person
{
public:
	Employee();
private:
	std::string job_title;
	std::string dept_name;
};

#endif


#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <string>

class Employee : public Person
{
public:
	Employee(std::string first_name, std::string last_name, std::string job_title);
	std::string get_full_name();
	std::string get_job_title();
private:
	std::string job_title;
};

#endif


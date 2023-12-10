#include "Employee.h"
#include <string>
#include <ctime>

Employee::Employee(std::string first_name, std::string last_name, std::string job_title)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->job_title = job_title;
}

std::string Employee::get_full_name()
{
	return this->first_name + " " + this->last_name;
}

std::string Employee::get_job_title()
{
	return this->job_title;
}

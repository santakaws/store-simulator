#pragma once
#include "Person.h"
#include <ctime>
class Customer : public Person
{
public:
	Customer(std::string first_name, std::string last_name, int interval);
	int get_interval();
	std::time_t get_time_created();
	std::string get_full_name();
	void check_delete();
	void set_interval(int interval);
private:
	int interval;
	std::time_t time_created;

};


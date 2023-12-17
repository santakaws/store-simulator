#pragma once
#include "Person.h"
#include "Department.h"
#include <ctime>
#include <vector>
#include <unordered_map>
class Customer : public Person
{
public:
	Customer(std::string first_name, std::string last_name, int interval);
	~Customer();
	int get_interval();
	std::time_t get_time_created();
	std::string get_full_name();
	std::unordered_map<std::string, int> get_shopping_list();
	std::unordered_map<std::string, int> get_shopping_cart();
	void set_interval(int interval);
	void add_to_cart();
	void shop(std::vector<Department*> departments);
	void possible_actions();

private:
	int interval;
	std::time_t time_created;
	std::unordered_map<std::string, int> shopping_list = { { "Ham", 2 } };
	std::unordered_map<std::string, int> shopping_cart;
};


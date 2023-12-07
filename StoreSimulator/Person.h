#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
	Person();
protected:
	std::string first_name;
	std::string last_name;
	bool in_store;
};

#endif

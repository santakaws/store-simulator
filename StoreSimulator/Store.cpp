#include "Store.h"
#include <vector>
#include <string>


Store::Store() {
}

std::vector<Department> Store::get_departments() {
	return this->departments;
}
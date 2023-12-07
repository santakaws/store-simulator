// StoreSimulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Store.h"
#include <string>

int main()
{
    Store* s = new Store();
    Department* d = new Department();
    s->add_department(*d);
    d->set_department_name("Deli");

    for (int i = 0; i < 20; i++) {
        Employee* e = new Employee("Employee", std::to_string(i), "Store Associate");
        d->add_employee(*e);
    }

    for (Department dept : s->get_departments()) {
        for (Employee emp : dept.get_employee_list()) {
            std::cout << emp.get_full_name() << " " << emp.get_job_title() << "\n";
        }
    }
    


    std::cout << d->get_department_name() <<"\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

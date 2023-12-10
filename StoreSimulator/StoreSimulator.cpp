// StoreSimulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Store.h"
#include <string>
#include <windows.h>
#include <thread>

int main()
{
    std::srand(time(NULL));
    Store* s = new Store();
    Department* d = new Department();
    s->add_department(d);
    d->set_department_name("Deli");
    d->set_inventory({ 
        {"Turkey", 3}, 
        {"Roast Beef", 7},
        {"Ham", 13} });

    for (int i = 0; i < 20; i++) {
        Employee* e = new Employee("Employee", "#" + std::to_string(i), "Store Associate");
        d->add_employee(e);
    }

    int name = 1;
    //std::thread delete_check(&Store::delete_customer, s);

    while (true) {
        s->delete_customer();
        Customer* c = new Customer("Jake", std::to_string(name++), std::rand() % 10);
        s->add_customer(c);
        Sleep(2000);
    }

    //delete_check.join();
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

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
    std::vector<std::string> first_names = { "Jake", "Bob", "Anna", "Lauren", "Cesar", "Luis"};
    std::vector<std::string> last_names = { "Lopez", "Garcia", "Brown", "Smith", "Armstrong", "Wallace" };
    Store* s = new Store();
    s->set_prices({
        {"Turkey", 6.99},
        {"Roast Beef", 10.99},
        {"Ham", 7.99} });
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


    while (true) {
        s->delete_customer();
        for (int i = 0; i < std::rand() % 3; i++) {
            Customer* c = new Customer(first_names[std::rand() % first_names.size()], last_names[std::rand() % last_names.size()], 10 + (std::rand() % 35));
            s->add_customer(c);
        }
        s->customer_actions();
        Sleep(2000);
    }
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

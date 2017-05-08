#include "Employee.h"
#include <iostream>
#include <string>



Employee::Employee()
{
}


Employee::~Employee()
{
}

void Employee::getData()
{
	std::cout << "Please enter name: ";
	std::cin >> name;
	std::cout << "Please enter number: ";
	std::cin >> empNumber;
}
void Employee::showData()
{
	std::cout << "Employee name: " << name << std::endl;
	std::cout << "Employee number: " << empNumber << std::endl;
}
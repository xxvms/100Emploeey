#pragma once
#include <string>
class Employee
{
private:
	std::string name;
	long empNumber;

public:
	Employee();
	~Employee();
	void getData();
	void showData();
};


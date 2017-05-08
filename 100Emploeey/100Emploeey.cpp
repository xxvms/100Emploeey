// 100Emploeey.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "Employee.h"


int main()
{
	Employee team[10];

	for (int i = 0; i < 10; i++)
	{
		team[i].getData();
	}

	for (int j = 0; j < 10; j++)
	{
		team[j].showData();
	}


	system("pause");
    return 0;
}


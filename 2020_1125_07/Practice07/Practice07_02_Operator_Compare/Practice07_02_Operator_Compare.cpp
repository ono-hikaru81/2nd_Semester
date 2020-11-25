#include <iostream>
#include "Employee.h"

int main()
{
	Employee satou(Employee::POST::STAFF);
	Employee deguchi(Employee::POST::PRESIDENT);

	satou.ShowPost();
	deguchi.ShowPost();

	if (deguchi > satou)
	{
		printf("deguchiさんのほうが偉い\n");
	}
	else
	{
		printf("satouさんのほうが偉い...かも\n");
	}

	return 0;
}

#include "NOD.h"
#include <iostream>
#include <math.h>

int NOD::findNOD(int num1, int num2)
{
	int Max, Min;
	if (num1 == num2)
	{
		result = num1;
		return result;
	}

	Max = std::max(num1, num2);
	Min = std::min(num1, num2);
	result = Min;
	for (int i = 0; ; i++)
	{
		if (i != 0)
		{
			Max = Min;
			Min = result;
		}
		if (Max % Min == 0)
			break;
		result = Max % Min;
	}

	return result;
}

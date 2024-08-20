#include <iostream>
#include "Fib_func.h"

int fibanachi(int m) 
{
	if (m < 1)
	{
		 return 0;
	}
	if (m == 1) 
	{
		return 1;
	}
	
	return fibanachi(m - 1) + fibanachi(m - 2);
}

void fib_array_filling(const int fib_for, int* fib_array)
{
	for (int i = 0; i < fib_for; i++)
	{
		fib_array[i] = fibanachi(i);
	}
}
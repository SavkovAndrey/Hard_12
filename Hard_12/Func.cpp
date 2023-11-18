#include <iostream>
#include "Func.h"
using namespace std;

void fill_mass(int**&arr, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}
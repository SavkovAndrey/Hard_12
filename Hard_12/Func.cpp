#include <iostream>
#include <iomanip>
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

void output_mass(int** arr, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void fill_B(int** arr, int* B, int n)
{
	for (int i = 0; i < n; i++)
	{
		B[i] = arr[i][i];
    }
}

void fill_C(int** arr, int* C, int n)
{
	for (int i = 0; i < n; i++)
	{
		C[i] = arr[i][n - i - 1];                        // идем с верхнего-правого угла в нижний-левый...
  	}                                                    // n - i - 1 (так как итерируемся с 0)
}

void out_ABC(int** arr, int* B, int*C, int r, int c, int s)
{
	int k = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << setw(5) << arr[i][j];
			if (k < s)
			{
				cout << setw(5) << B[k] << setw(5) << C[k];
				k++;
			}
			cout << endl;
		}
	}
}
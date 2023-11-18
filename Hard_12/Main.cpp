#include <iostream>
#include "Func.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	int row, col;
	cout << "¬ведите размерность массива:" << endl;
	cout << "„исло строк: ";
	cin >> row;
	cout << "число столбецов: ";
	cin >> col;

	int** mass = new int*[row];
	for (int i = 0; i < row; i++)
	{
		mass[i] = new int[col];
	}



	fill_mass(mass, row, col);
	output_mass(mass, row, col);



	for (int i = 0; i < row; i++)
	{
		delete[] mass[i];
	}
	delete[] mass;

	system("pause");
	return 0;
}
#include <iostream>
#include "Func.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	int row, col;
	cout << "Введите размерность массива:" << endl;
	cout << "Число строк: ";
	cin >> row;
	cout << "число столбецов: ";
	cin >> col;

	//------------------------- Создание массива
	int** A = new int*[row];
	for (int i = 0; i < row; i++)
	{
		A[i] = new int[col];
	}

	//------------------------- Манипуляции

	fill_mass(A, row, col);                // заполнить
	output_mass(A, row, col);              // вывести

	int BC_size = 0;
	if (row <= col) BC_size = row;          // вычисляем размер диагоналей
	else BC_size = col;

	int* B = new int[BC_size];
	int* C = new int[BC_size];
	fill_B(A, B, BC_size);                // заполняем B
	fill_C(A, B, BC_size);                // заполняем С

	out_ABC(A, B, C, row, col, BC_size);  // выводим колонками массивы

	//------------------------- Удаление массива
	for (int i = 0; i < row; i++)
	{
		delete[] A[i];
	}
	delete[] A;

	delete[] B;

	delete[] C;

	system("pause");
	return 0;
}
#include <iostream>
#include "Func.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	int row, col;
	cout << "������� ����������� �������:" << endl;
	cout << "����� �����: ";
	cin >> row;
	cout << "����� ���������: ";
	cin >> col;

	//------------------------- �������� �������
	int** A = new int*[row];
	for (int i = 0; i < row; i++)
	{
		A[i] = new int[col];
	}

	//------------------------- �����������

	fill_mass(A, row, col);                // ���������
	output_mass(A, row, col);              // �������

	int BC_size = 0;
	if (row <= col) BC_size = row;          // ��������� ������ ����������
	else BC_size = col;

	int* B = new int[BC_size];
	int* C = new int[BC_size];
	fill_B(A, B, BC_size);                // ��������� B
	fill_C(A, B, BC_size);                // ��������� �

	out_ABC(A, B, C, row, col, BC_size);  // ������� ��������� �������

	//------------------------- �������� �������
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
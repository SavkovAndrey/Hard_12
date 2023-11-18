#pragma once
void fill_mass(int**&arr, int r, int c);                 // «аполнение массива
void output_mass(int** arr, int r, int c);               // ¬ывод массива
void fill_B(int** arr, int* B, int n);                   // заполн€ем массив B диагональю (главной)
void fill_C(int** arr, int* C, int n);                   // заполн€ем массив — второй диагональю
void out_ABC(int** arr, int* B, int*C, int r, int c, int s);
// ivan19.2.cpp : Дана матрица размера M × N. Поменять местами столбцы, содержащие минимальный и максимальный элементы матрицы.

#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, M, i, j, min, max, k, a, b;
	a = 0;
	b = 0;

	cout << "Введите, пожалуйста, число N: ";
	cin >> N;
	cout << "Введите, пожалуйста, число M: ";
	cin >> M;

	int** matrix = new int* [M];
	for (i = 0; i < M; i++)
	{
		matrix[i] = new int[N];
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			cin >> matrix[i][j];
		}
	}

	min = matrix[0][0];
	max = matrix[0][0];

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (j = 0; j < N; j++)
	{
		for (i = 0; i < M; i++)
		{
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
				a = j;
			}
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				b = j;
			}
		}
	}

	for (i = 0; i < M; i++)
	{
		k = matrix[i][a];
		matrix[i][a] = matrix[i][b];
		matrix[i][b] = k;
	}

	cout << "Измененная матрица: " << endl;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

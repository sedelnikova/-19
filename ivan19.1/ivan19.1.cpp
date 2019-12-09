// ivan19.1.cpp Дана матрица размера M × N. Преобразовать матрицу, поменяв местами минимальный и максимальный элемент в каждой строке.

#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, M, i, j, min, max, k;

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

	min = 0;
	max = 0;

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (j = 0; j < M; j++)
	{
		for (i = 0; i < N; i++)
		{
			if (matrix[j][i] < matrix[j][min])
			{
				min = i;
			}
			if (matrix[j][i] > matrix[j][max])
			{
				max = i;
			}
		}
		
		k = matrix[j][min];
		matrix[j][min] = matrix[j][max];
		matrix[j][max] = k;
		max = 0;
		min = 0;
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

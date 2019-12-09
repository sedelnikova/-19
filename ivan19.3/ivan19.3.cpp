// ivan19.3.cpp : Дана матрица размера M × N (M и N — четные числа). Поменять местами левую верхнюю и правую нижнюю четверти матрицы

#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, M, i, j, a, b, k;
	k = 0;

	cout << "Введите, пожалуйста, число N (четное): ";
	cin >> N;
	cout << "Введите, пожалуйста, число M (четное): ";
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

	a = M / 2;
	b = N / 2;

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (j = 0; j < b; j++)
	{
		for (i = 0; i < a; i++)
		{
			k = matrix[i][j];
			matrix[i][j] = matrix[a + i][b + j];
			matrix[a + i][b +j] = k;
		}
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

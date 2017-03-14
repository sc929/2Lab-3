#include "stdafx.h"
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;

class Matrix
{
public:
	int **p;
	int n, m;
	Matrix(int n, int m)
	{
		this->n = n;
		this->m = m;
		unsigned int i, j;
		p = (int **)malloc(n * sizeof(int *));
		for (i = 0; i < n; i++) 
			p[i] = (int *)malloc(m * sizeof(int));
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				p[i][j] = rand() % 100;
				cout << p[i][j] << " ";
			}
			cout << endl;
		}
	}
};

Matrix & operator *(Matrix& v2, double x)
{ 
	for (unsigned int i = 0; i < v2.n; i++)
		for (unsigned int j = 0; j < v2.m; j++)
			v2.p[i][j] = v2.p[i][j] * x; 
	return v2; 
}

int main()
{
	int n, m, k;
	cout << "n=";
	cin >> n;
	cout << "m=";
	cin >> m;
	Matrix M1(n, m);
	cout << "*";
	cin >> k;
	M1 = M1 * k;
	for (unsigned int i = 0; i < n; i++)
	{
		for (unsigned int j = 0; j < m; j++)
		{
			cout << M1.p[i][j] << " ";
		}
		cout << endl;
	}
	_getch();
    return 0;
}
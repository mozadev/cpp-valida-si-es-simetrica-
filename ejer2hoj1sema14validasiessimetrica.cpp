#include "stdafx.h"
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include <Windows.h>
#include <iomanip>

using namespace std;
using namespace System;

void ingresadatos(int *n, int *m, int **simetrica)
{
	for (int i = 0; i < *n; i++)
		for (int j = 0; j < *m; j++)
		{
			cout << "ingrese dato [" << i + 1 << "],[" << j + 1 << "]:";
			cin >> simetrica[i][j];
		}
}

void salidadatos(int *n, int *m, int **simetrica)
{
	for (int i = 0; i < *n; i++)
	{
		for (int j = 0; j < *m; j++)
			cout << simetrica[i][j] << " ";
		cout << endl;
	}
}

void validacionsimetrica(int *n, int *m, int **simetrica)
{
	int contador = 0;
	if (*n == *m)
		for (int i = 0; i < *n; i++)
			for (int j = 0; j < *m; j++)
				if (simetrica[i][j] == simetrica[j][i])
				{
					contador ++;
				}


	if (contador==*n**m)
		cout << "la matriz es simetrica";
	else
		cout << "la matriz no es simetrica";

}


int main()
{
	int n, m;
	cout << "ingresa filas"; cin >> n;
	cout << "ingresa columnas"; cin >> m;
	int **simetrica;
	simetrica = new int *[n];
	for (int i = 0; i < n; i++)
		simetrica[i] = new int[m];
	ingresadatos(&n, &m, simetrica);
	salidadatos(&n, &m, simetrica);
	validacionsimetrica(&n, &m, simetrica);

	_getch();

}
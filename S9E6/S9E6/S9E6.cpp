// S9E6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
	int sf[10], sc[10];
	int m1[10][10], m,sum=0;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++) {
			m = rand() % 50 + 1;
			m1[i][j] = m;
			}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout<< m1[i][j]<<"\t";
		}
		cout << "\n ";
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			sum += m1[i][j];
		}
		sf[i] = sum;
		cout << "Suma de la fila " << i + 1 << ":" << sf[i] << "\n";
		sum = 0;
	}
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			sum += m1[i][j];
		}
		sc[j] = sum;
		cout << "Suma de la Columna " << j + 1 << ":" << sc[j] << "\n";
		sum = 0;
	}
	
}


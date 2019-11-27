#include <iostream>
#include <stdio.h>
#include <istream>
#include <string>
#define MAXCAD 200
using namespace std ;
void leerCadena(char cad[]);
void fun(char cad[]);
void leerAlumno(int x);
struct Alm_Dat 
{
	char nomb[10], apell1[20], apell2[20];
	int edad, ano_apert;
	char dni [9];
};

int main(void) {
	fun("PROI_1");
	int x;
	char d=83;
	while (d == 'S')
	{
		x++;
		leerAlumno(x);
		cout << "Quieres añadir otro alumno? S/N \n";
		cin >> d;
		cout << "\n";
	}
	return 0;

}
void leerCadena( char cad[]) {
	cin.getline(cad, MAXCAD - 1);
}void leerAlumno(int g){
	int x = g;
	Alm_Dat a[100];
	cout << "Nombre: ";
	leerCadena(a[x].nomb);
	cout << "\nPrimer apellido: ";
	leerCadena(a[x].apell1);
	cout << "\nSegundo apellido: ";
	leerCadena(a[x].apell2);
	cout << "\nEdad: ";
	cin >> a[x].edad;
	cout << "\nAño de apertura de expediente: ";
	cin >> a[x].ano_apert;
	fflush;
	cout << "\nDNI:  ";
	leerCadena(a[x].dni);
}void fun(char cad[]) {

	int n = 5;

	char* p = cad;

	while (*p++);

	cout << n << p;

}
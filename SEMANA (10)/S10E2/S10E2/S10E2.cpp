
#include <iostream>
#define MAXCAD 200
using namespace std;
struct coche
{	int vel_max, priz;
	char marc[30], modelo[30], combust[30];
};
void leerCadena( char cad[]);
void leerFlotante(int f);
void datos_coche();
int main()
{
   
}
void datos_coche() {
	coche c1;
	cout << "\nIntroduce marca :";
	leerCadena(c1.marc);
	cout << "\nIntroduce modelo :";
	leerCadena(c1.modelo);
	cout << "\nIntroduce velocidad maxima :";
	leerFlotante(c1.vel_max);
	cout << "\nIntroduce precio :";
	leerFlotante(c1.priz);
	cout << "\nIntroduce tipo de combustible :";
	leerCadena(c1.combust);
}
void leerCadena(char mensaje[], char cad[]) {
	cout << mensaje;
	cin.getline(cad, MAXCAD - 1);
}void leerFlotante(int f1) {	cin.getline(f1, MAXCAD - 1);}
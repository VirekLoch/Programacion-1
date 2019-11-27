#include<iostream>
#define MAXCAD 250
using namespace std;
void leerCadena(char cad[]);
int main (void){
	char pal[100];
	int x=0,z=0;
	leerCadena(pal);
	do
	{
		switch (pal[x])
		{
		case 'a':z++;
			break;
		case 'e':z++;
			break;
		case 'i':z++;
			break;
		case 'o':z++;
			break;
		case 'u':z++;
			break;
		default:
			break;
		}
		x++;
	} while (pal[x]!='\0');
	
	cout << z;
}
void leerCadena(char cad[]) {
	cin.getline(cad, MAXCAD - 1);
}
#include<iostream>
#include<string.h>
using namespace std;
void leerCadena(char cad[], int x);
void invertir(char cad[], int x);
int main(){
	
	char buffer[100];
	int longitud=1;
	leerCadena(buffer,longitud);
	string s1(buffer);
	cout << s1;
	longitud = s1.length();
	invertir(buffer, longitud);
}
void leerCadena(char cad[], int x) {
	cin.getline(cad, 79);
}
void invertir(char cad[], int x) {
	for (int i = x; i >= 0; i--)
	{
		cout << cad[i];
	}
}
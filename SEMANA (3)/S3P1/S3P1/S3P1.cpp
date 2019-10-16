#include <iostream>

using namespace std;

int main() {
	int entero1 = 8;
	int entero2 = 8.5;
	float real = 8.5;
	char letra = 'a';
	char pal[5] = "HOLA";

	cout << "El valor de entero1 es: " << entero1 << endl;
	cout << "El valor de entero2 es: " << entero2 << endl;
	cout << "El valor de real es: " << real << endl;
	cout << "El valor de letra es: " << letra << endl;
	cout << "El valor de pal es: " << pal << endl;
	cout << "El valor de la posicion 2 de " << pal << " es: " << pal[2] << endl;

	return 0;
}


#include <iostream>
using namespace std;

int dividir(int a, int b);

int main() {
	int area;
	int base, altura;

	cout << "Introduce base: ";
	cin >> base;
	cout << "Introduce altura: ";
	cin >> altura;

	area = dividir(base,altura);
	cout << "El area es: " << area << endl;

	return 0;
}


int dividir(int a, int b) {
	int cociente;
	cociente = a / b;
	return cociente;
}
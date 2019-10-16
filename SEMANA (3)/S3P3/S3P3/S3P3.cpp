#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b;

	cout << "Programa calculadora" << endl;
	cout << "Introduce el primer valor" << endl;
	cin >> a;
	cout << "Introduce el segundo valor" << endl;
	cin >> b;

	cout << "Operadores aritmeticos" << endl;
	cout << a << " + " << b << " = " << (a + b) << endl;
	cout << a << " - " << b << " = " << (a - b) << endl;
	cout << a << " * " << b << " = " << (a * b) << endl;
	cout << a << " / " << b << " = " << (a / b) << endl;
	cout << a << " % " << b << " = " << (a % b) << endl;

	cout << "Operadores relacionales" << endl;
	cout << a << " == " << b << " = " << (a == b) << endl;
	cout << a << " != " << b << " = " << (a != b) << endl;
	cout << a << " > " << b << " = " << (a > b) << endl;
	cout << a << " < " << b << " = " << (a < b) << endl;

	cout << "Operadores unarios" << endl;
	cout << " ++a  = " << ++a << endl;
	cout << " b++ = " << b++ << endl;
	cout << "!" << b << " = " << (!b) << endl;
	cout << "!" << 0 << " = " << (!0) << endl;

	cout << "Funciones matematicas" << endl;
	cout << "Raiz cuadrada de " << a << " = " << sqrt(a) << endl;
	cout << "Coseno de " << a << " = " << cos(a) << endl;

}

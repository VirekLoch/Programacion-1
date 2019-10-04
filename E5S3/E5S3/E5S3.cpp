#include <iostream>

using namespace std;
int main(void) {
	int n1, n2, result;
	char carac;
	cout << "Escribe dos numeros : ";
	cin >> n1 >> n2;
	cout << "\nEscribe un caracter : ";
	cin >> carac ;
	switch (carac) {
	case '/' :result = n1 / n2;
		if (n2 == 0) { cout << "Cero no es valido"; break; }
		cout << "\n" << n1 << "/" << n2 << "=" << result;
		break;
	case '*':result = n1 * n2;
		cout << "\n" << n1 << "*" << n2 << "=" << result;
		break;
	case '+':result = n1 + n2;
		cout << "\n" << n1 << "+" << n2 << "=" << result;
		break;
	case '-':result = n1 - n2;
		cout << "\n" << n1 << "-" << n2 << "="<<result;
		break;
	default: cout << "\nCaracter incorrecto : ";
	}


}
#include <iostream>
using namespace std;

int main()
{
	char c;

	cout << "Introduce un caracter:" << endl;
	cin >> c;

	if ((c >= 'a' && c <= 'z' )||(c >= 'A' && c <= 'Z')) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			cout << c << " es una vocal" << endl;
		else
			cout << c << " es una consonante" << endl;
	}
	else {
		if (c >= '0' && c <= '9')
			cout << c << " es un caracter numerico" << endl;
		else
			cout << c << " es un caracter no alfanumerico" << endl;
	}

	return 0;
}
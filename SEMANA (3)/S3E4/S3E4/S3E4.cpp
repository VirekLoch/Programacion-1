#include <iostream>
#define PI 3.14151692
using namespace std;

float radio, result;
int main(void)
{
	cout << "Introduce el radio de la circunferencia a calcular";
	cin >> radio;
	result = PI * radio * radio;
	cout << "El area es : " << result;
	return 0;
}



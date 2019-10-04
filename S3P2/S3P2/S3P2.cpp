#include <iostream> 
using namespace std;

int sumar(int a, int b);

int main() {
	float i, j, res;

	cout << "Introduce dos numeros enteros: " << endl;

	cin >> i;
	cin >> j;

	res = i+j;

	cout << i << " + " << j << " = " << res << endl;
	return 0;
}


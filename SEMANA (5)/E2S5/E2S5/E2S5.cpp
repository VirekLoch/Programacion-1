#include <iostream>
using namespace std;
int main(void) {
	int i, c, tab;
	cout << "Escribe tu numero: ";
	cin >> i;
	for (c = 0; c <= 10; c++) {
		tab = i * c;
		cout <<"\n"<< i << "x" << c << "=" << tab;
	}
	return 0 ;
}
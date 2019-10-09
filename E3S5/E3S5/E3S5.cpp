#include <iostream>
using namespace std;
int main() {
	int i, n,f=1;
	cout << "Escribe tu numero :";
	cin >> n;
	for (i = 1; i <= n; i++) {

		f = f + (i-1);
	}
	cout <<"\n"<< f;
}
#include<iostream>
using namespace std;
int main(void) {
	int num, i,t=0;
	cout << "Escribe tu numero";
	cin >> num;
	for (i = 2; i < num; i++) {
			if (num % i == 0) t++;
	}
	if (num = 2) {
		cout << "El numero no es primo";
		return 0;
	}
	if (t != 0) cout << "El numero no es primo";
	else cout << "El numero es primo";
		
}
#include<iostream>
using namespace std;
int main() {
	int v[100],par=0,impar=0;
	for (int i = 0; i < 100; i++)
		v[i] = i;
	for (int i = 0; i < 100; i++) {
		if (v[i] % 2 == 0)
			par++;
		else
			impar++;
	}
	cout << "Pares:" << par << "\t impares" << impar;
}
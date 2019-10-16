#include<iostream>
using namespace std;
int suma(int a, int b);
int leer ();
int main(void) {
	int  sumar;
	int v1 = leer(), v2 =  leer();
	sumar = suma(v1, v2);
	cout << "Tu suma es : "<<sumar;
}
int leer(){
	int v;
	cout << "Introduce valor ";
	cin >> v;
	return v;

}
int suma(int a, int b) {
	int c, sum = 0;
	if (a > b) { 
		for (c = b; c <= a; c++) {
			sum = sum + c;
		}
	}
	for (c = a; c <= b; c++) {
		sum = sum + c;
	}
	
	return sum;
}
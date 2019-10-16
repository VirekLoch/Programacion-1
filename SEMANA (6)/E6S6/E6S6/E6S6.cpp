#include<iostream>
using namespace std;
float calcm(float m, float a);
float leer();
int main(void) {
	float masa = leer(), altura = leer(),masc;
	masc = calcm(masa, altura);
	cout << masc;
}
float leer() {
	float v;
	cout << "Introduce valor ";
	cin >> v;
	return v;

}
float calcm(float m, float a) {
	float r;
	r = m / (a * a);
	return r;
}
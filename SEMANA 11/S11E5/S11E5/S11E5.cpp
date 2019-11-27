#include<iostream>
using namespace std;
char* leeString();
void pasarCadena(string s);
int main() {
	string s1,s2;
	char ca1[100], ca2[100];
	s1 = leeString();
	for (int x = 0; x < 100; x++)
		ca1[x] = s1[x];
	for (int x = 0; x < 100; x++)
		ca2[x] = s2[x];
}
char* leeString() {
	static char cadena[40];
	scanf_s("%s", &cadena);
	return cadena;
}
void pasarCadena(string s) {
	char ca[100];
	for (int x = 0; x < 100; x++)
	ca[x] = s[x];
}
#include<iostream>
using namespace std;

int main() {
	int x=0,t,c;
	float sum=0 ,n[100];
	char d;
	do {
		x++;
		cout << "Introduce una nota";
		cin >> n[x];
		cout << "Quieres seguir introduciendo notas : S/N";
		cin >> d;
	} while (d == 'S' || d == 's');
	c = x;
	x = 0;
		for (t = 0; t <= c; t++) {
			
			sum = sum + n[x];
			x++;
		}
	
	sum = sum / c;
	cout << sum;
}
MANL
#include <iostream>
using namespace std;
int calc(int a1, int b1);
int main(void) {
	int a=0, b=0, r, c;
	cin >> a >> b;
	r = calc(a, b);
	cout << r;
}
int calc(int a1, int b1) {
	int ca=0, t=0,d=a1-b1;
	do {
		ca = ca + b1;
		t++;
	} while (ca <= d);
	return t;
}
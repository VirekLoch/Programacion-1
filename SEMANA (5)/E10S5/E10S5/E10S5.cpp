#include <iostream>
using namespace std;
int main() {
	int n[100], x=0, c, t, f = 0;
	char td;
	do {
		x++;
		cin >> n[x];
		cin >> td;
	} while (td == 's' || td == 'S');
	c = x;
	for (t = 1; t <= c; t++)
		if (n[f] > n[t])
			f = t;
	cout << n[t];
}
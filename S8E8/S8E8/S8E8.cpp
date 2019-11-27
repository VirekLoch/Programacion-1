#include<iostream>
using namespace std;
int escrit(int d[100]);
int main(void) {
	int v[100], num, mult[100];
	escrit(&v[100]);
	for (int i = 0; i <= 100; i++) {
		cout<<v[i];
	}
}
int escrit(int d [100]) {
	for (int i = 0; i <= 100; i++) {
		d[i] = i;
	}
	return d[100];
}
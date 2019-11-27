#include<iostream>
using namespace std;
int main() {
	int v1[10], v2[10];
	for (int i = 0; i < 10; i++)
		cin >> v1[i];
	for (int i = 0; i < 10; i++)
		cin >> v2[i];
	for (int i = 0; i < 10; i++)
		cout << v1[i]<<"\t";
	for (int i = 10; i >0; i--)
		cout << v2[i] << "\t";
}

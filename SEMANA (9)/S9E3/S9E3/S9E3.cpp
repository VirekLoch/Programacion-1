#include<iostream>
using namespace std;
int main(){
	int matriz[5][8],m=0,x,y;
	for (int j = 0; j < 8; j++)		
		for (int i = 0; i < 5; i++) {
			matriz[i][j] = m;
			m=m+2;
		}
	cout << "Tu matriz es :\n";
	for (int j = 0; j < 8; j++)
	{
		for (int i = 0; i < 5; i++) {
			cout << matriz[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "Que numero quieres buscar ?\n";
	cin >> x  >> y;
	x = x - 1;
	y = y - 1;
	cout << "Tu valor es :" << matriz[x][y];
}
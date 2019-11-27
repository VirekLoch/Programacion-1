#include <iostream>
using namespace std;
int main()
{
	int m1[4][4],m2[4][4],m;
	for(int i =0; i<4;i++)
		for (int j = 0; j < 4; j++) {
			m = rand() % 10;
			m1[i][j] = m;
			m2[j][i] = m1[i][j];
		}
	for ( int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++) {
			cout << m1[i][j] << "\t";
		}
		cout << "\n";
	}	cout << "La nueva es;\n"; 
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++) {
			cout << m2[i][j] << "\t";
		}
		cout << "\n";
	}

}


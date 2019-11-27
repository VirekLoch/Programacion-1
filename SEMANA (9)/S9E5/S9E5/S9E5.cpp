
#include <iostream>
#define t 4;
#define f 4;
using namespace std;

void lerMat(float m [t] [f]);
int main()
{
	float m1[4][4];
	lerMat(m1[t][f]);
}
void lerMat(float m[t][f]) {
	int d;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) {
			d = rand() % 10;
			m[i][j] = d;
		}
}

{
	int m1[4][4], m2[4][4], m;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) {
			m = rand() % 10;
			m1[i][j] = m;
			m2[j][i] = m1[i][j];
		}
	for (int j = 0; j < 4; j++)
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
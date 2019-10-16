#include <iostream>
using namespace std;
int main(void)
{
	float x, y, m, pcort;
	cout << "Introduce la coordenada x =";
	cin >> x;
	cout << "\nAhora la pendiente de la funcion =";
	cin >> m;
	cout << "\nY para terminar su punto de corte con el eje de abscias =";
	cin >> pcort;
	y = (m * x) + pcort;
	cout << "\nLa funcon resultante es    y=("<<m<<" * x) + "<<pcort;
	cout << "\nSegun tus datos el valor de y ="<<y;
	return 0;

}




#include <iostream>
using namespace std;
int main()
{
	int f;
	float result, b, h, l, rad;
	
    cout << "Que deseas :\n1-Area de triangulo\n2-Area de esfera \n3-Area de un cuadrado\n";
	cin >> f;
	switch(f)
	{
		case 1 :cout << "Introduce base y altura del triangulo";
			cin >> b >> h;
			result = (b * h) / 2;
			cout << "Su area es :"<<result;
			break;
		case 2 :cout << "Introduce radio de la esfera";
			cin >> rad;
			result = 3.14151692 * (rad*rad);
			cout << "Su area es :" << result;
			break;
		case 3 :cout << "Introduce lado del cuadrado";
			cin >> l;
			result = l*l;
			cout << "Su area es :" << result;
			break;
		default :cout << "No valido";
	}
	return 0;
}


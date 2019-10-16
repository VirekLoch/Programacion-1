#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3;
    cout << "Introduce 3 numeros";
	cin >> n1 >> n2 >> n3;
	if ((n1 > n2)&&(n1 > n3)) {
		cout<<n1<< " Es el mayor";
	}
	else {
		if (n2 > n3) cout << n2 << " es el mayor";
		else cout << n3 << " es el mayor";
	}
	return 0;
}


#include <iostream>

using namespace std;

int main() {
	int i, s = 0;

	for (i = 0; i < 10; i=i+2) {
		cout << "El contador vale " << i << endl;
			s = s + i;
	}
	cout << "La suma de los pares es " << s << endl;
	return 0;
}
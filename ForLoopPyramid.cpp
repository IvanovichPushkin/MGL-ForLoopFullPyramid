#include <iostream>
using namespace std;

int main() {
	int rows, columni, z = 1;
	cout << "Input number of rows: ";
	cin >> rows;
	for(int x = 1; x <= rows; x++){
		for(int gaps = 1; gaps <= rows - x; gaps++){
			cout << " ";
		}
		for(int y = 1; y <= x; y++){
			cout << z << " ";
			z++;
		}
		cout << endl;
	}
	return 0;
}

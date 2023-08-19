#include <iostream>
using namespace std;

int main() {
	int size;

	cout << "Enter a size of tree: ";
	cin >> size;
	int temp = size;

	for (int i = 1; i <= size; i++) {
		for (int j=0; j<temp-1 ; j++) {
			cout << " ";
		}
		temp--;
		for (int k = 0; k < i; k++) {
			cout << "* ";
		}
		cout << endl;

	}

	return 0;
}
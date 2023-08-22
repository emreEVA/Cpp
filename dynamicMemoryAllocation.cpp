#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Dizinin boyutunu giriniz: ";
	cin >> x;
	
	int* p = new int[x];
	
	for (int i = 0; i < x; i++) {
		cout << "Dizinin " << i + 1 << ". elemanini giriniz: ";
		cin >> p[i]; 
		cout << endl;
	}

	cout << "dizinin elemanlari: " << endl;

	for (int i = 0; i < x; i++) {
		cout << p[i] << ",";
	}
	cout << endl;
	return 0;
}
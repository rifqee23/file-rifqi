#include <iostream>
using namespace std;

int main() {
	
	string x, y, z;
	
	cout << "Nama Lengkap: " << x << "\n";
	cin>> x;
	cout << "NPM: " << y << "\n";
	getline(cin, y) >> y;
	cout << "Hobi saya: " << z << "\n";
	getline(cin, z) >> z;
	cout << "Nama Saya adalah " << x << " dengan NPM " << y << ". Hobi saya adalah " << z;
	return 0;
	
}



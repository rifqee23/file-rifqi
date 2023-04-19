#include <iostream>
using namespace std;

int main() {
	
	string x, y, z;
	
	cout << "Nama Lengkap: " << x << "\n";
	cin >> x;
	cout << "Nama Panggilan: " << y << "\n";
	cin >> y;
	cin.ignore(1,'\n');
	cout << "Hobi saya adalah" << z << "\n";
	getline(cin, z) >> z;
	return 0;
	
}

#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	
	int *ptr;
	 
	ptr = &a;
	
	cout << "nilai dari a: " << a << endl;
	cout << "alamat dari a: " << ptr << endl;
	cout << *ptr;
	
	
	return 0;
}

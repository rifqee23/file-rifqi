#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int jmlar;
	char x;
	cout << "jumlah index: " << endl;
	cin  >> jmlar; 
	int angka[jmlar];
	cin >> x;
	char y[x];
	
	
	
	do
	{
		cout << "Masukkan nilai index ke -" << a << " : ";
		cin >> angka [a];
		a++;
	}while(a<jmlar);
	
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "nilai yang tersimpan" << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	while(b<jmlar)
	{
		cout << "Index Ke-" << b << " : " << angka [b] << y[b];
		b++;
	}
}

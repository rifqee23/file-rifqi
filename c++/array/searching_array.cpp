#include<iostream>
using namespace std;

int main()
{
	int angka[] = {10, 2 , 8 , 3 , 7 , 4, 5};
	int length = sizeof(angka)/sizeof(*angka);
	int dtcari, hasilcari;
	
	for(int i =0;i < length;i++)
	{
		cout << "Masukkan Index: " << i << " : " << angka[i] << endl;
	}
	cout << "Data Yang dicari: ";
	cin >> dtcari;
	
	for(int j = 0; j < length; j++)
	{
		if(dtcari == angka[j])
		{
			hasilcari++;
			cout << hasilcari << endl;
		}
	}
	if(hasilcari == 0)
	{
		cout << "Data Tidak ditemukan" << endl;
	}
	else
	{
		cout << "Data " <<dtcari<< " ditemukan di ";
		for(int k = 0; k < length; k++)
		{
			if(dtcari == angka[k])
			{
				cout << "Index Ke-" << k << endl;
			}
			
		}
	}
	
}

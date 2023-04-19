#include <iostream>
using namespace std;

int main()
{
	int length;
	cout << "Jumlah Index: ";
	cin >> length; 
	int nilai[length];
	 
	int temp;
	
	for(int j =0; j<length;j++)
	{
		cout << "Masukkan Index Ke-" << j << " : ";
		cin >> nilai[j];
	}
	
	for(int i = 1; i < length; i++)
	{
		for(int j = 0; j < length-i; j++)
		{
			if(nilai[j] > nilai[j+1])
			{
				temp = nilai[j]; 
				nilai[j] = nilai[j+1];
				nilai[j+1]=temp;
			}
		}
		for(int c=0; c < length; c++)
		{
			cout << nilai[c]<< " | ";
		}
		cout <<endl;
	}
	cout << "Hasil Sorting: " << endl;
	for(int x = 0; x < length; x++)
	{
		cout << " " << nilai[x] << endl;
	}
}

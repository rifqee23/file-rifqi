#include <iostream>
using namespace std;

int main()
{
	int jmlindex, max, min, nilai;
	
	cout << "banyak data = ";
	cin >> jmlindex;
	
	for(int i = 1; i < jmlindex;i++)
	{
		cout << "Masukkan Data Ke-" << i << " = ";
		cin >> nilai;
		if(i == 1)
		{
			min = nilai;
			max = nilai;
		}
		else
		{
			if(nilai > max)
			{
				max = nilai;
			}
		}
		if(nilai < min)
		{
			min = nilai;
		}
	}
	cout << "Nilai Max = " << max << endl;
	cout << "Nilai Minimal = " << min << endl;
}

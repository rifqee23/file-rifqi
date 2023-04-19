#include <iostream>
using namespace std;

int main()
{
	float jmldata, data, total, mean;
	
	cout << "Jumlah Data";
	cin >> jmldata;
	
	for(int i = 0 ; i < jmldata ; i++)
	{
		cout << "Masukkan data ke-" << i << " = ";
		cin >> data;
		total += data;
	}
	cout << "Total nilai = " << total << endl;
	mean = total/jmldata;
	cout << "Rata-rata = " << mean << endl;
}

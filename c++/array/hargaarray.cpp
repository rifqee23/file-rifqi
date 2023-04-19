#include<iostream>
using namespace std;

int main()

{
	int a=0;
	int harga[] = {5000,6000,1000,2000,3000};
	int jmlar = sizeof(harga)/sizeof(*harga);
	
	do
	{
		cout << harga[a] << endl;
		a++;
	}while(a<jmlar);
	
}

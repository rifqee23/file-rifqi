#include <iostream>
using namespace std;

int main()
{
	int jml;
	int num[] = {87,90,93,96,99};
	jml = sizeof(num)/sizeof(num[0]);
	
	for(int i = 2; i < jml; i++)
	{
		cout << num[i] << endl; 
	}
	int i=0;
	while(i < jml)
	{
		cout << num[i] << " ";
		i++;
	}
}

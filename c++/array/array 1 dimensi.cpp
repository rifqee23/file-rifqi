#include <iostream>
using namespace std;

int main()
{
	char jml;
	char num[] = {'+'};
	jml = sizeof(num)/sizeof(*num);
	
	for(char i = 2; i < jml; i++)
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

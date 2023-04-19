#include <iostream>
using namespace std;

int main()
{
//    int *ptrbilangan;
//    int bilangan = 1001;
//
//    ptrbilangan = &bilangan;
//
//	cout<< "*ptrbilangan = " << *ptrbilangan << endl;
//	*ptrbilangan = 77;
//
//    cout << "Isi bilangan via ptrbilangan" << endl;
//
//    cout << "isi bilangan sekarang = " << bilangan << endl;
void *ptrVoid;
int bilangan = 1001;
float pi = 3.14;

//Penugasan pointer untuk menunjuk bilangan
ptrVoid = &bilangan;

cout << "*ptrVoid = " << *(int *)ptrVoid << endl;

//penugasan pointer untuk menunjuk pi
ptrVoid = &pi;

//Penyajian isi variabel bilangan
cout << "*ptrVoid = " << *(float *)ptrVoid << endl;


    return 0;
}

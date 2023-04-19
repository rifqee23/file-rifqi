#include <iostream>
using  namespace std;

int main(){
    char nama[15] = "John";
    char prodi[]= "Ilkom";

    cout << nama << endl;
    cout << sizeof(nama) << endl;

    cout << prodi << endl;
    cout << sizeof(prodi) << endl;

    for(int i =0; i< sizeof(prodi);i++){

        cout << prodi[i] << " " << (prodi[i] == '\0'?"Null":"Not Null") << endl;

        }
}

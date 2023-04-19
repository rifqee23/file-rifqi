#include <iostream>
using namespace std;

int main(){
    int age = 20;
    //selection
    cout << "Selection :" << endl;
    if(age > 17){
        cout << "Umur anda diatas 18 tahun";
    }
    else{
        cout << "Umur anda kurang dari 18 tahun";
    }

    cout << endl << endl;
    //iteration
    cout << "Iteration :" << endl;
    int i = 0;
    while(i < 5){
        cout << "Nama saya Rifqi" << endl;

        i++;
    }
}

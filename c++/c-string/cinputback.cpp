#include <iostream>
using namespace  std;

int main(){

    char karakter;
    while(cin.get(karakter)){
        if(karakter == 'a')
            cin.putback('x');


        else
            cout << karakter;

    }

}

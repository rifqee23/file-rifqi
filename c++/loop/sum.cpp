#include<iostream>

using namespace std;

int main(){
    int sum = 0, i =0, n, nilai;

    cout << "Masukkan batasnya : ";
    cin >> n;
    while(i < n){


        cout << "Masukkan angka ke-" << i+1 << " : ";
        cin >> nilai;
        sum+=nilai;
        i++;
    }
    cout << sum;

    return 0;

}

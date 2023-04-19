#include<iostream>
using namespace std;

int main(){
	
	int length;
	cout << "Jumlah Index: ";
	cin >> length;
	int angka[length];
	int dtcari, hasilcari;
	
	for(int i =0 ; i < length; i++){
		cout << "Masukkan Nilai Index Ke-" << i << " : ";
		cin >> angka[i];
		 
	}
	cout << "Data yang dicari : ";
	cin >> dtcari;
	
	for(int j = 0; j< length ; j++){
		if(dtcari == angka[j]){
			hasilcari++;
		}
	}
	if(dtcari == 0){
		cout << "Data Tidak Ditemukan" << endl;
	}
	
	else{
		cout << "Data " << dtcari << " ditemukan ";
		for(int k=0; k<length ;k++){
			if(dtcari == angka[k]){
				cout << "di Index ke-" <<  k << endl;
			}
		}
	}
}

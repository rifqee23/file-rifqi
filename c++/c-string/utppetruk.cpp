#include <iostream>
using namespace std;

class Roi{
private:
    string namaPerusahaan;
    string namaProjek;
    int jumlahTahun;
    int manfaatPertahun;
    int biayaPertahun;
public:

    Roi(string inputnamaProjek, string inputnamaPerusahaan){
        Roi::namaProjek = inputnamaProjek;
        Roi::namaPerusahaan = inputnamaPerusahaan;

        cout << Roi::namaProjek << endl;
        cout << Roi::namaPerusahaan << endl;

    }
    void setjumlahTahun(int jumlahTahun){
         Roi::jumlahTahun= jumlahTahun;

    }
    string getjumlahTahun(){
        return  namaPerusahaan;
    }



};

int main(){


    Roi data1 = Roi("petruk", "Rifqi Company");
    Roi data;
    data.setjumlahTahun(3);
    coub << data.getjumlahTahun;


}

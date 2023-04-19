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
        Roi(string inputnamaProjek, string inputnamaPerusahaan, inputJumlahTahun, inputManfaatPertahun, inputBiayaPertahun){
        this -> namaProjek = inputnamaProjek;
        this -> namaPerusahaan = inputnamaPerusahaan;
        this -> jumlahTahun = inputJumlahTahun;
        this -> manfaatPertahun = inputManfaatPertahun;
        this -> biayaPertahun = inputBiayaPertahun;

        cout << this -> namaProjek << endl;
        cout << this -> namaPerusahaan << endl;

    }
    void setjumlahTahun(int jumlahTahun){
         this -> jumlahTahun= jumlahTahun;

    }
    int getjumlahTahun(){
        return  namaPerusahaan;
    }
    void setManfaatPertahun(int inputManfaatPertahun) {
        this -> manfaatPertahun = inputManfaatPertahun;
    }
    int getManfaatPertahun() {
        return manfaatPertahun;
    }
    void setBiayaPertahun(int inputBiayaPertahun) {
        this -> biayaPertahun = inputBiayaPertahun;
    }
    int getBiayaPertahun() {
        return biayaPertahun;
    }
     void setNamaPerusahaan(string inputNamaPerusahaan) {
        this -> namaPerusahaan = inputNamaPerusahaan;
    }
    string getNamaPerusahaan() {
        return namaPerusahaan;
    }
    void setNamaProjek(string inputNamaProjek) {
        this -> namaProjek = inputNamaProjek;
    }
    string getNamaProjek() {
        return namaProjek;
    }
    void hitungROI() {
        double ROI = ((double)(manfaatPertahun - biayaPertahun) / (double)biayaPertahun) * 100.0;
        if (ROI > 5.0) {
            cout  <<  ROI << "%" << endl;
        } else {
            cout << " Projek Gagal " << ROI << "%" << endl;
        }
    }




};

int main(){
    Roi data = Roi("UTP Petruk", "Rifqi COmpany", 5, 10000, 6000);



    Roi data;
    data.setNamaPerusahaan("Rifqi Company");
    cout << data.getNamaPerusahaan;
    data.setNamaProjek("UTP Petruk");
    cout << data.getNamaProjek;

    data.setjumlahTahun(5);
    cout << data.getjumlahTahun;

    data.setManfaatPertahun(1000);
    cout << data.getManfaatPertahun;

    data.setBiayaPertahun(5000);
    cout << data.getBiayaPertahun;
    data.hitungROI();


}

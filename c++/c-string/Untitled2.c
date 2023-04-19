
#include <iostream>


using namespace std;

class Roi {
private:
    string namaPerusahaan;
    string namaProjek;
    int jumlahTahun;
    int manfaatPertahun;
    int biayaPertahun;
public:

    Roi() {
        namaPerusahaan = "(Nama Kalian)";
        namaProjek = "Bebas";
        jumlahTahun = 0;
        manfaatPertahun = 0;
        biayaPertahun = 0;
    }

    Roi(string inputNamaProjek, string inputNamaPerusahaan, int inputJumlahTahun, int inputManfaatPertahun, int inputBiayaPertahun) {
        namaPerusahaan = inputNamaPerusahaan;
        namaProjek = inputNamaProjek;
        jumlahTahun = inputJumlahTahun;
        manfaatPertahun = inputManfaatPertahun;
        biayaPertahun = inputBiayaPertahun;
    }
    // Getter dan Setter
    void setJumlahTahun(int inputJumlahTahun) {
        jumlahTahun = inputJumlahTahun;
    }
    int getJumlahTahun() {
        return jumlahTahun;
    }
    void setManfaatPertahun(int inputManfaatPertahun) {
        manfaatPertahun = inputManfaatPertahun;
    }
    int getManfaatPertahun() {
        return manfaatPertahun;
    }
    void setBiayaPertahun(int inputBiayaPertahun) {
        biayaPertahun = inputBiayaPertahun;
    }
    int getBiayaPertahun() {
        return biayaPertahun;
    }
    void setNamaPerusahaan(string inputNamaPerusahaan) {
        namaPerusahaan = inputNamaPerusahaan;
    }
    string getNamaPerusahaan() {
        return namaPerusahaan;
    }
    void setNamaProjek(string inputNamaProjek) {
        namaProjek = inputNamaProjek;
    }
    string getNamaProjek() {
        return namaProjek;
    }

    void hitungROI() {
        double ROI = ((double)(manfaatPertahun - biayaPertahun) / (double)biayaPertahun) * 100.0;
        if (ROI > 5.0) {
            cout << "Proyek " << namaProjek << " dari perusahaan " << namaPerusahaan << " berhasil dengan ROI sebesar " << ROI << "%" << endl;
        } else {
            cout << "Proyek " << namaProjek << " dari perusahaan " << namaPerusahaan << " gagal dengan ROI sebesar " << ROI << "%" << endl;
        }
    }
    // Fungsi cstring 1
    const char* getNamaPerusahaanCString() {
        return namaPerusahaan.c_str();
    }
    // Fungsi cstring 2
    const char* getNamaProjekCString() {
        return namaProjek.c_str();
    }
    // Method untuk mencetak output dari class
    void print() {
        cout << "Perusahaan: " << namaPerusahaan << endl;
        cout << "Proyek: " << namaProjek << endl;

int main() {
    Roi proyek1("Proyek 1", "PT ABC", 5, 10000, 5000);
    proyek1.hitungROI();
    return 0;
}


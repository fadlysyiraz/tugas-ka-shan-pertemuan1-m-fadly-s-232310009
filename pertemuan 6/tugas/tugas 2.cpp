#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
protected:
    string merek;
    int tahunProduksi;
public:
    Kendaraan(string _merek, int _tahunProduksi) : merek(_merek), tahunProduksi(_tahunProduksi) {}
    virtual void info() {
        cout << "Merek: " << merek << endl;
        cout << "Tahun Produksi: " << tahunProduksi << endl;
    }
};

class Mobil : public Kendaraan {
private:
    int jumlahPintu;
public:
    Mobil(string _merek, int _tahunProduksi, int _jumlahPintu) : Kendaraan(_merek, _tahunProduksi), jumlahPintu(_jumlahPintu) {}
    void info() override {
        Kendaraan::info();
        cout << "Jumlah Pintu: " << jumlahPintu << endl;
    }
};

int main() {
    string merekMobil = "Mio Fadly";
    int tahunProduksiMobil = 2024;
    int jumlahPintuMobil = 2;

    Mobil mobil1(merekMobil, tahunProduksiMobil, jumlahPintuMobil);

    cout << "Informasi Mobil:" << endl;
    mobil1.info();

    return 0;
}

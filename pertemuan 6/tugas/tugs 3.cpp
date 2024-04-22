#include <iostream>
using namespace std;

class BangunDatar {
public:
    virtual int hitungLuas() = 0;
};

class PersegiPanjang : public BangunDatar {
private:
    int panjang;
    int lebar;
public:
    PersegiPanjang(int p, int l) : panjang(p), lebar(l) {}

    int hitungLuas() override {
        return panjang * lebar;
    }
};

class Segitiga : public BangunDatar {
private:
    int alas;
    int tinggi;
public:
    Segitiga(int a, int t) : alas(a), tinggi(t) {}

    int hitungLuas() override {
        return 0.5 * alas * tinggi;
    }
};

class Persegi : public BangunDatar {
private:
    int sisi;
public:
    Persegi(int s) : sisi(s) {}

    int hitungLuas() override {
        return sisi * sisi;
    }
};

int main() {
    // Input
    int panjang_persegi_panjang, lebar_persegi_panjang;
    int alas_segitiga, tinggi_segitiga;
    int panjang_persegi, lebar_persegi;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang_persegi_panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar_persegi_panjang;

    cout << "Masukkan alas segitiga: ";
    cin >> alas_segitiga;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi_segitiga;

    cout << "Masukkan panjang persegi: ";
    cin >> panjang_persegi;
    cout << "Masukkan lebar persegi: ";
    cin >> lebar_persegi;

    // Objek bangun datar
    PersegiPanjang pp(panjang_persegi_panjang, lebar_persegi_panjang);
    Segitiga seg(alas_segitiga, tinggi_segitiga);
    Persegi persegi(panjang_persegi);

    // Menghitung dan menampilkan luas masing-masing bangun datar
    cout << "Luas bangun datar:\n";
    cout << "Luas persegi panjang: " << pp.hitungLuas() << endl;
    cout << "Luas segitiga: " << seg.hitungLuas() << endl;
    cout << "Luas persegi: " << persegi.hitungLuas() << endl;

    return 0;
}

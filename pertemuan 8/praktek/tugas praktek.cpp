#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> pesertaAntrian;

    while (true) {
        cout << "1. Nasukkan nomor peserta kedalan antrian" << endl;
        cout << "2. Hapus nomor peserta terakhir dari antrian" << endl;
        cout << "3. Tampilkan senua nomor peserta dalan antrian" << endl;
        cout << "4. Keluar dari program antrian" << endl;
        cout << "Masukkan Opsi: ";
        int opsi;
        cin >> opsi;

        if (opsi == 1) {
            int nomorPeserta;
            cout << "Nasukkan nomor peserta: ";
            cin >> nomorPeserta;
            pesertaAntrian.push_back(nomorPeserta);
            cout << "No peserta dalan antrian: ";
            for (int i = 0; i < pesertaAntrian.size(); i++) {
                cout << pesertaAntrian[i] << " ";
            }
            cout << endl;
        } else if (opsi == 2) {
            if (!pesertaAntrian.empty()) {
                pesertaAntrian.pop_back();
                cout << "No peserta dalan antrian: ";
                for (int i = 0; i < pesertaAntrian.size(); i++) {
                    cout << pesertaAntrian[i] << " ";
                }
                cout << endl;
            } else {
                cout << "Antrian kosong" << endl;
            }
        } else if (opsi == 3) {
            if (!pesertaAntrian.empty()) {
                cout << "No peserta dalan antrian: ";
                for (int i = 0; i < pesertaAntrian.size(); i++) {
                    cout << pesertaAntrian[i] << " ";
                }
                cout << endl;
            } else {
                cout << "Antrian kosong" << endl;
            }
        } else if (opsi == 4) {
            break;
        } else {
            cout << "Opsi tidak valid" << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(char rak[], int n, char target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (rak[mid] == target) {
            return mid + 1; 
        } else if (rak[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // not found, kembalikan -1
}

int main() {
    char rak[] = {'A', 'B','C', 'D', 'E'};
    int num_racks = sizeof(rak) / sizeof(rak[0]);

    char input;
    bool ulang= true;

    while (ulang) {
        cout << "\nMasukkan Huruf Awal Dari Judul Buku Yang Ingin Dicari (Huruf Besar) : ";
        cin >> input;

        int result = binarySearch(rak, num_racks, input);

        if (result != -1) {
            cout << "Buku Dengan Huruf Awal '" << input << "' Dapat Ditemukan Di Rak Nomor " << result << endl;
        } else {
            cout << "Buku Dengan Huruf Awal '" << input << "' Tidak Ditemukan." << endl;
        }

        char choice;
        cout << "Apakah Anda Ingin Mencari Buku Lain? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            ulang = false;
        }
    }


    return 0;
}


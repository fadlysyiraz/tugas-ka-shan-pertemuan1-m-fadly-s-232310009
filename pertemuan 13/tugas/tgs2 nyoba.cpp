#include <iostream>
using namespace std;


const int TABLE_SIZE = 7;

class HashTable {
private:
 
    int table[TABLE_SIZE];
  
    int status[TABLE_SIZE];

   
    int hashFunction1(int key) {
        return key % TABLE_SIZE;
    }

   
    int hashFunction2(int key) {
        
        return 7 - (key % 7);
    }

public:
   
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            table[i] = 0;
            status[i] = 0; 
        }
    }

    
    void insert(int key) {
        int index = hashFunction1(key);
        
        if (status[index] == 0 || status[index] == -1) {
            
            table[index] = key;
            status[index] = 1; 
        } else {
            
            int index2 = hashFunction2(key);
            int i = 1;
            while (true) {
                int newIndex = (index + i * index2) % TABLE_SIZE;
                if (status[newIndex] == 0 || status[newIndex] == -1) {
                    table[newIndex] = key;
                    status[newIndex] = 1; 
                    break;
                }
                i++;
            }
        }
    }

    bool search(int key) {
        int index = hashFunction1(key);
        int index2 = hashFunction2(key);
        int i = 0;
        while (status[(index + i * index2) % TABLE_SIZE] != 0 && i < TABLE_SIZE) {
            if (table[(index + i * index2) % TABLE_SIZE] == key) {
                return true;
            }
            i++;
        }
        return false;
    }

    void display() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << " --> ";
            if (status[i] == 1) {
                cout << table[i];
            } else {
                cout << "kosong";
            }
            cout << endl;
        }
    }
};

int main() {
    HashTable hash;


    hash.insert(10);
    hash.insert(20);
    hash.insert(30);
    hash.insert(40);
    hash.insert(15);

    cout << "Isi Table Hash:" << endl;
    hash.display();

    int searchKey;
    cout << "\nMasukkan elemen yang ingin dicari dalam tabel hash: ";
    cin >> searchKey;

    if (hash.search(searchKey)) {
        cout << "Elemen " << searchKey << " ditemukan dalam tabel hash." << endl;
    } else {
        cout << "Elemen " << searchKey << " tidak ditemukan dalam tabel hash." << endl;
    }

    return 0;
}


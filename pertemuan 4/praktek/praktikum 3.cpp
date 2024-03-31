#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
	public:
		mahasiswa(string nama, int umur)
		: nama_(nama), umur_(umur) {
	cout << "Constructor Mahsiswa" << endl;
		}
	mahasiswa() {
		cout << "===Contoh Constructor Mahasiswa==" << endl;
	}
	void TampilkanBiodata() {
		cout << "nama: " << nama_ << endl;
		cout << "umur: " << umur_ << endl;
	}
	private:
		string nama_;
		int umur_;
};

int main() {
	mahasiswa mhs("Katarina", 20);
	mhs.TampilkanBiodata(;)
}

return 0;
}


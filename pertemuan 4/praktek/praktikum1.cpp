#include<iostream>
#include<string>
using namespace std;

class pelajaran {         //Class Name
public:                //Access specifier
pelajaran() {            //Constructor
cout << "ini adalah materi c++ tentang Constructors!"
}
};

int main() {
	pelajaran obj;       //membuat obect dari sebuah class
	return 0;
}

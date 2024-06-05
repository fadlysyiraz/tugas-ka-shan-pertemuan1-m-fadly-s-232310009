#include <iostream>
#include <cstring>
using namespace std;

const int max = 100;
//deklarasi class
class queue 
{

private;
int front, rear, count;
int arr[MAX];

public:
	queue() {
		front = 0;
		reat = MAX - 1;
		count = 0;
	}
	
	void enqueue(int x) {
		if (count >= MAX) {
			cout << "Antrin penuh." << endl;
			return;
		}
		rear = (rear + 1) % MAX;
		arr(rear) = x;
		count++;
	}
	int dequeue () /
if (count <= 0) (
cout << "Antrian kosong." << endl; return -1;
}
int x = arr[front i
front = (front + 1) & MAX;
count--;
return x;
int peek () i
if (count <= 0) l
cout << "Antrian kosong." << endl; return -1;
}
return arr[front];
}
int size () {
return count;
}
bool isEmpty () i
return count == 0;
}
bool isFull () i
return count == MAX;
}
} ?
int main () {
//deklarasi bilangan dalam antrian
Queue qi
q. enqueue (1) ;
g.enqueue (4) ;
q. enqueue (5) ;
//deklarasi perintah yang akan dilakukan pada antrian 
cout << "Ukuran antrian: " << q.size () << endl; 
cout << "Elemen pertama: " << g.peek () << endl; 
cout << "Elemen kedua:" << q.peek () << endl; 
cout << "Elemen keluar: " << q.dequeue () << endl; 
cout << "Elemen pertama:" << q.peek () << endl; 
cout << "Ukuran antrian: " << q.size() << endl; 
return 0;
}

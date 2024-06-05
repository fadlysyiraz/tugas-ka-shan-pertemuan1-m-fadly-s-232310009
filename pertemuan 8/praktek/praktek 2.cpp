#include <iostream>
using namespace std;
const int MAX = 20;
class Queue l private:
int front;
int rear;
int arr [MAX] ;
public:
Queue () (
front = -1;
rear - -1;
}
void enqueue (int data) {
if((rear + 1) g MAX == front){
cout « "Queue is full." << endl;
return;
}
if (front == -1)
front= 0;
rear = (rear + 1) % MAX;
arr [rear] = data;
}
void dequeue () l
if (front == -1) i
cout « "Queue is empty." «< endl; return;
if (front == rear) i
front = -1;
rear = -1;
} else {
front = (front + 1) & MAX;
}
int front_ element () / if (front == -1) /
cout < "Queue is empty." << endl; return -1;
}
return arr[front];
}
bool is_empty () 1
return (front == -1) ;
} ;
int main () 1
Queue 9i
q.enqueue (1) ;
q.enqueue (2) ;
q.enqueue (3) ;
cout << "Front element is: " << q. front_element ()
<< endl;
q.dequeue () ;
cout << "Front element is: " << q. front_element ()
<< endl;
q.dequeue () ;
return 0;
}

#include <iostream>
using namespace std;

#define n 100

class queue{
    int* arr;
    int front,back;

    public:
        queue(){
            arr = new int[n];
            front = -1;
            back = -1;
        }

        void enqueue(int val){
            if(back == n-1){
                cout << "Queue Overflow" << endl;
                return;
            }
            back++;
            arr[back] = val;

            if(front == -1){
                front++;
            }
        }

        void dequeue(){
           if(front == -1 || front > back){
                cout << "Queue is empty nothing pop" << endl;
                return;
           }
           front++;
        }

        int peek(){
            if(front == -1 || front > back){
                cout << "No element in the queue" << endl;
                return -1;
            }

            return arr[front];
        }

        bool empty(){
            if(front == -1 || front > back){
                return true;
            }
            return false;
        }
};

int main(){
    queue q;
    for(int i = 0; i < 5; ++i){
        q.enqueue(i);
    }

    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    q.dequeue();
    q.dequeue();
    cout << q.peek() << endl;
}
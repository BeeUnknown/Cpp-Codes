#include <iostream>
using namespace std;

class node{

    public :
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};

class queue{

    public :
        node* front;
        node* back;

        void push(int val){
            node* n = new node(val);
            if(front == NULL){
                back = n;
                front = n;
                return;
            }
            back->next = n;
            back = n;
            return;
        }

        void pop(){
            if(front == NULL){
                cout << "Queue is empty" << endl;
                return;
            }
            node* todelete = front;
            front = front->next;
            delete todelete;
            return;
        }

        int peek(){
            if(front == NULL){
                return -1;
            }
            return front->data;
        }

        bool empty(){
            if(front != NULL){
                return false;
            }
            return true;
        }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);

    cout << q.peek() << endl;
    q.pop();
    

    return 0;
}
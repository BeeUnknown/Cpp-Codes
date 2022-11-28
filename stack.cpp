#include <iostream>
using namespace std;
#define n 100

class stack{
    int* arr;
    int top;

    public:
        stack(){
            arr = new int[n];
        }

        void push(int val){
            if(top == n-1)return;
            top++;
            arr[top] = val;
        }

        void pop(){
            if(top == -1)return;
            top--;
        }

        int topElement(){
            if(top == -1)return -1;
            return arr[top];
        }

        bool empty(){
            if(top == -1)return 1;
            return 0;
        }

        bool full(){
            if(top == n-1)return 1;
            return 0;
        }
};

int main(){

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.topElement() << endl;
    st.pop();
    
    return 0;
}
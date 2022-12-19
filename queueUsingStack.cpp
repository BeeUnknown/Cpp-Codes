#include <iostream>
#include <stack>
using namespace std;

class queue{
    stack<int> s1,s2;
    public :
        void push(int val){
            s1.push(val);
        }

        int pop(){
            if(s1.empty() && s2.empty()){
                cout << "Queue is empty" << endl;
                return -1;
            }

            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }

            int topVal = s2.top();
            s2.pop();
            return topVal;
        }

        bool empty(){
            if(s1.empty() && s2.empty()){
                return true;
            }

            return false;
        }

};

int main(){
    queue q;
    for(int i = 1; i <= 5; ++i){
        q.push(i);
    }

    for(int i = 1; i <= 5; i++){
        cout << q.pop() << endl;
    }

    return 0;
}

// int pop(){
//     if(s.empty()){
//         return -1;
//     }

//     int x = s.top();
//     s.pop();
//     if(s.empty()){
//         return x;
//     }

//     int items = pop();
//     s.push(x);
//     return items;
// }
#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){
    int len = s.size();
    stack<string>st;
    for(int i = 0; i < len; ++i){
        string word = "";
        while(s[i] != ' ' && i < len){
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    
    string s = "hey, how are you doing?";
    reverseSentence(s);

    return 0;
}
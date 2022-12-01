#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <math.h>

using namespace std;

int precedence(char c){
    if(c == '^'){
        return 3;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    else return -1;
}

string infixTOprefix(string s){
    stack<char> st;
    reverse(s.begin(),s.end());
    int len = s.length();
    string ans = "";
    for(int i = 0; i < s.length(); i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            ans += s[i];
        }
        else if(s[i] == ')'){
            st.push(s[i]);
        }
        else if(s[i] == '('){
            while(!st.empty() && st.top() != ')'){
                ans += st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && precedence(st.top()) > precedence(s[i])){
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    cout << infixTOprefix("(a-b/c)*(a/k-l)") << endl;
}

// "(a-b/c)*(a/k-l)"
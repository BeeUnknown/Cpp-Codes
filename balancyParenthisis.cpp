#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <climits>
#include <math.h>

using namespace std;

map<char,char> mp = {{'(',')'}, {'[',']'},{'{','}'}};

int validString(string s){
   int len =  s.length();
   stack<char> st;
   for(int i = 0; i < len; ++i){
      if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
         st.push(s[i]);
      }
      else{
         if( !st.empty() && mp[st.top()] == s[i]){
            st.pop();
         }
      }
   }
   if(st.empty())return 1;
   else return 0;
}


int main(){

   cout << validString("[{({])}]") << endl;
   return 0;
}

// "[{()}]"

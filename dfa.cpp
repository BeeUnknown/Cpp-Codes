#include<iostream>
using namespace std;

int main(){

    string str;
    cout<<"Enter the string :";
    cin>>str;

    char f='a';


    for(int i=0; i<str.length();i++){

        if(str[i]!='0' && str[i]!='1'){

            cout<<"Wrong format taken"<<endl;
            return 0;
        }

        switch(f){

            case 'a': if(str[i]=='0'){

                f='b';
            }

            else if(str[i]=='1'){

                f='a';
            }
            break;

            case 'b': if(str[i]=='0'){

                f='c';
            }

            else if(str[i]=='1'){

                f='a';
            }
            break;

            case 'c': if(str[i]=='0'){

                f='c';
            }

            else if(str[i]=='1'){

                f='1';
            }
        }
    }

    if(f=='c'){

        cout<<"String is accepted well done\n";
    }

    else{

        cout<<"Opps string is not accepted try once again";
    }

    return 0;
}
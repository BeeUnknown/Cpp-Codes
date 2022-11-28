#include<iostream>
using namespace std;

class A{
    public :

    void funcA(){
        cout << "Func A\n" << endl;
    }
};

class B {
    public :

    void funcB(){
        cout << "Func B\n";
    }
};

class C : public A,public B{

};

class student{
    public:
    string name;
    int age;
    bool gender;

    student(){
        cout << "This is default constructor"<<endl;
    }

    student(student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;

        cout << "This is copy constructor" << endl;
    }

    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        else return false;
    }

    void printInfo(){
        cout << this->name << endl;
        cout << this->age << endl;
        cout << this->gender << endl;
    }

    student(string n , int a, bool g){
        name = n;
        age = a; 
        gender = g;

        cout << "This is parameterised constructor" << endl;
    }
};

int main(){
    C c;
    c.funcA();
    c.funcB();
    // student a("raju",20,1);
    // student b;
    // student c(a);

    // if(c == a){
    //     cout << "same\n";
    // }
    // else cout << "not same\n";

    return 0;
}
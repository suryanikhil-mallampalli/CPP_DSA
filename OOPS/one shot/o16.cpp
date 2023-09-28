// Polymorphism
// compile-time polymorphism
// function overloading
#include<iostream>
using namespace std;

class A{
    public:
    void fun(){
        cout<<"i am A"<<endl;
    }
    void fun(int a){
        cout<<a<<endl;
    }
    
};
// polymorphism
// run-time, dynamic polymnorphism
// function overriding
#include<iostream>
using namespace std;

class A{
    public:
    void speak(){
        cout<<"i am speaking"<<endl;
    }
};
class Dog: public A{
    public:
    void speak(){ // here the speak() in class A is over-ridden
        cout<<"i am barking"<<endl; // new speak() is created
    }
};

int  main(){
    Dog d;
    d.speak();
    return 0;
}

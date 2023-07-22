// Inheritance Ambiguity

#include<iostream>
using namespace std;


class A{
    public:

    void fun(){
        cout<<"i am A"<<endl;
    }
};

class B{
    public:
    void fun(){
        cout<<"i am B"<<endl;
    }
};

class c: public A, public B{

};

int main(){
    c obj;
    // obj.fun(); // ambigous call

    obj.A::fun();
    obj.B::fun();
    return 0;
}
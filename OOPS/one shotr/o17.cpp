// polypmorphism
//compiletime polymorphism, static polymorphism
//operator overloading

#include<iostream>
using namespace std;

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B & obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output: "<<value2-value1<<endl;
    }
};

int main(){
    B o1,o2;

    o1.a=4;
    o2.a=7;

    o1 + o2;
}
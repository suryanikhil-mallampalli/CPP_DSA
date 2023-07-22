// heirarchial inheritance
#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"barking"<<endl;

    }
};

class a: public Animal{
    public:
    void func2(){
        cout<<"inside func2"<<endl;
    }
};


class b: public Animal{
    public:
    void func3(){
        cout<<"inside func3"<<endl;
    }
};



int main(){
    a o1;
    o1.bark();    

    return 0;
}
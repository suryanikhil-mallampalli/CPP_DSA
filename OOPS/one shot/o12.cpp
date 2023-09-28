// multilevel Inheritance
#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;

    }
};

class Dog: public Animal{

};

class gs: public Dog{

};

int main(){
    Dog d;
    d.speak();
    cout<<d.age;
    return 0;
}
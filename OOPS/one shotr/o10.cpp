// Inheritance
// Inheriting some properties from another class

#include<iostream>
using namespace std;

class Human{
    protected:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight=w;
    }
};


// Inheriting

class Male: public Human{
    public:
    string color;
    void sleep(){
        cout<<"male is sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
};

int main(){ 
    Male obj1;
    // cout<<obj1.age<<endl;
    // cout<<obj1.color<<endl;
    // cout<<obj1.height<<endl;
    // cout<<obj1.weight<<endl;

    // obj1.setWeight(84);
    // cout<<obj1.weight<<endl;
    return 0;
}
// constructor declaration: 1) Default Constructor 2) Parameterized constructor
#include<iostream>
using namespace std;

class Hero{
    private:
    int health;
    
    public:
    char name[100];
    char level;

    // constructor created
    Hero(){
        cout<<"Default Constructor called"<<endl; 
    }

    // parameterised constructor
    Hero(int health){
        cout<<"this->"<< this <<endl;
        this -> health=health; 
    }

    Hero(int health, char level){
        this->level =  level;
        this->health = health;
    }



    void print(){
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char l){
        level = l;
    }
};

int main(){
    // object created statically 
    Hero a(10);
    cout<<"Address of a: "<<&a<<endl;

    // dynamically
    Hero *h = new Hero(11);
    
    Hero temp(22,'B');
}
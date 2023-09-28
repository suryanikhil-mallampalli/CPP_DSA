// copy constructor declaration
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

    // copy constructor
    Hero(Hero &h){ // has to be passed by reference other the reference goes infinite times
        cout<<"Copy constructor called"<<endl;
        this->health = h.health;
        this->level = h.level;
    }

    void print(){
        cout<<health<<endl;
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
    Hero a(10,'c');
    a.print();

    // using copy constructor
    Hero b(a) ;
    // replacing statements
    // b.health=a.health;
    // b.level=b.level;
    b.print();
;    
}
// Destructor
#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    
    public:
    char *name;
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
    Hero(Hero& h){ // has to be passed by reference other the reference goes infinite times
        cout<<"Copy constructor called"<<endl; // this is deep copy
        char *ch= new char[strlen(h.name)+1];
        strcpy(ch, h.name);
        this->name=ch;
        this->health = h.health;
        this->level = h.level;  
    }
    void print(){
        cout<<this->health<<endl;
        cout<<this->level<<endl;
        cout<<this->name<<endl;
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
    void setName(char name[]){
        strcpy(this->name, name);
    }

    // destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    // object created statically 
    Hero a;

    // Dynamically
    Hero *b= new Hero;
    delete b;
}


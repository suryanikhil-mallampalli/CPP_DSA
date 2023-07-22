// static and dynamic allocation of memory 
#include<iostream>
using namespace std;

class Hero{
    public:
        int health;
        char name[100];
        char level;
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
    //static allocation
    Hero a;
    cout<<sizeof(a)<<endl;

    a.setHealth(80);
    a.setLevel('A');

    cout<<"level is: "<<a.level<<endl;
    cout<<"health is: "<<a.getHealth()<<endl;

    // dynamic allocation
    Hero *b =  new Hero;
    cout<<sizeof(b)<<endl;

    b->setHealth(70);
    b->setLevel('A');

    cout<<"level is "<<(*b).level<<endl;
    cout<<"Health is: "<<(*b).getHealth()<<endl;

    cout<<"level is: "<<b->level<<endl;
    cout<<"health is: "<<b->health<<endl;

}
// have used setter and getter function
// Access modifiers
#include<iostream>
using namespace std;

class Hero{
    private:
        int health;
    public:
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
    // static allocation
    Hero surya;

    // using getter function
    cout<<"Surya's health is: "<<surya.getHealth()<<endl;
    cout<<"Surya's level is: "<<surya.getLevel()<<endl;

    // using setter function
    surya.setLevel('A');   
    surya.setHealth(100);
    cout<<"Surya's health is: "<<surya.getHealth()<<endl;
    cout<<"Surya's level is: "<<surya.getLevel()<<endl;    
}

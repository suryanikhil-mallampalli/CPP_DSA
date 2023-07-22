// Encapsulation
// Hiding Data/ information

#include<iostream>
using namespace std;
class  Student {
    private:
        string name;
        int age;
        int hegiht;
    public:
        int getAge(){
            return this->age;
        }
};

int main(){
    Student first;
    cout<<first.getAge();
}
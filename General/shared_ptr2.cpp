#include<bits/stdc++.h>
using namespace std;
class Test{
    int x;
    public:
        Test(int a=0){ x=a; cout<<"Constructor"<<endl;}
        ~Test(){ cout<<"Destructor"<<endl;}
        void fun(){ cout<<x<<endl; }
};
//utility code
int32_t main(){
    shared_ptr<Test> ptr1;// here the ptr was declared but not assigned. so, constructor is not called.
    {
    shared_ptr<Test> ptr2=make_shared<Test>(10);//here the constructor is called.
    ptr1=ptr2;
    }// here one ptr exist so destructor is not called.
    cout<<"Main ends"<<endl;
    return 0;
}
//here the destructor is called.

// output:
// Constructor
// Main ends
// Destructor
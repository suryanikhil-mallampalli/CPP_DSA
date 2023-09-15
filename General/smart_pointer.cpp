//smart pointer for the same functionality of previous problem
#include<bits/stdc++.h>
using namespace std;
class Test{
    public:
        int x,y;
        Test(int a=0,int b=0){
            x=a;
            y=b;
            cout<<"Constructor called"<<endl;
        }
        ~Test(){
            cout<<"Destructor called"<<endl;
        }
};
//This is a special pointer class which we need to implement
class SP{
    Test *ptr;
    public:
    SP(Test *p=NULL){ ptr=p;}
    ~SP(){ delete ptr;}
    Test &operator*(){return *ptr;}
    Test *operator->(){return ptr;}
};
//utility code
int32_t main(){
    cout<<"Main begins"<<endl;
    {
        SP sp(new Test(10,20));
    }
    cout<<"Main ends"<<endl;
    return 0;
}
// Output:
// Main begins
// Constructor called
// Destructor called
// Main ends
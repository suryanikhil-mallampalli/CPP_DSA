//unique_ptr
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
    cout<<"Main begins"<<endl;
    {
        //unique_ptr<Test> ptr(new Test(10)); --Older version<C++14
        unique_ptr<Test> ptr=make_unique<Test>(10);
        ptr->fun();
    }
    cout<<"Main ends"<<endl;
    return 0;
}
// Output:
// Main begins
// Constructor
// 10
// Destructor
// Main ends

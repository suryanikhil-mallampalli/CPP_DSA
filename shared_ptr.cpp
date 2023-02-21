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
    shared_ptr<Test> ptr1=make_shared<Test>(10);//only valid after c++14 version
    shared_ptr<Test> ptr2=ptr1;
    cout<<ptr1.use_count()<<endl;// "use_count()" should be used in new version, but not "use.count()"
    cout<<ptr2.use_count()<<endl;
    return 0;
}
// Output: 
// Constructor
// 2
// 2
// Destructor
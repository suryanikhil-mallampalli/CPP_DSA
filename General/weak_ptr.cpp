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
    weak_ptr<Test>p1;
    {
        shared_ptr<Test>p2=make_shared<Test>(10);
        p1=p2;
        cout<<p2.use_count()<<endl;// we can see the reference count is only 1
    }
    cout<<p1.expired()<<endl;// for checking: p1 also expired so it returns 1
    cout<<"Main ends"<<endl;
    return 0;
}
//weak pointers does not increase reference count let them be there, it does not matter.

//output is like as if the weak pointer is not there.
// Output:
// 1
// Constructor
// Destructor
// 1
// Main ends
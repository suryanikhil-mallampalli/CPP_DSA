#include<bits/stdc++.h>
using namespace std;
//template smart pointer : we can use this for any data type
template<class T>
class SP{
    T *ptr;
    public:
    SP(T *p=NULL){ ptr=p;}
    ~SP(){ delete ptr;}
    T &operator*(){return *ptr;}
    T *operator->(){return ptr;}
};
//utility code
int32_t main(){
    int *ptr1=new int(10);
    {
        int*ptr2=ptr1;
        SP<int> sp(ptr2);
    }
    cout<<*ptr1;
    return 0;
}
// here the problem is SP may also erase ptr1 memory along with ptr2
// output:
// 16742872 (unexpected garbage value)
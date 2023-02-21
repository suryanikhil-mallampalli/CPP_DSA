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
    SP<int> sp(new int());
    *sp=20;
    cout<<*sp;
    return 0;
}

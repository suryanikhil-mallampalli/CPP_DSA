#include<bits/stdc++.h>
using namespace std;
class Test{
    int *ptr;
    public:
    Test(int x){
        ptr=new int(x);
    }
    void set(int x){
        *ptr=x;
    }
    void print(){
        cout<<*ptr<<" ";
    }
};
int main(){
    
}

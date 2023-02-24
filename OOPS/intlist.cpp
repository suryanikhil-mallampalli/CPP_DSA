//in this i have implemented initialized list
#include<bits/stdc++.h>
using namespace std;
class Test{
    public:
    Test(){ cout<<"Default"<<endl;}
    Test(int x){ cout<<"Parameter"<<endl;}
};
class Main{
    Test t;
    public:
    Main(): t(10){
        // you can note the above declaration as initialization list. 
    }
};
int main(){
    Main m;
    return 0;
}
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
//utility code
int32_t main(){
    cout<<"Main began"<<endl;
    {
        Test *p=new Test(10,20);
    }
    cout<<"Main ends"<<endl;
    return 0;
}
// Main began
// Constructor called
// Main ends
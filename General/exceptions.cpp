#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int x, y;
    cin>>x>>y;
    try{
        if(y==0)
            throw 0;
            
        cout<<"Result: "<<x/y;
    }
    catch(int x){
        cout<<"Divisor is zero";
    }
    return 0;
}

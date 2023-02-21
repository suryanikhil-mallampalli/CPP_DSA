#include<bits/stdc++.h>
using namespace std;
void f1()throw(int){
    cout<<"f1 begins \n";
    throw 100;
    cout<<"f1 ends \n";
}
void f2() throw(int){
    cout<<"f2 begins \n";
    f1();
    cout<<"f2 ends \n";
}
//utility code
int32_t main(){
    try{
        f2();
    }
    catch(int e){
        cout<<"Exception ocuured"<<endl;// if there is no catch block in the whole code the code may crash 
    }
    return 0;
}

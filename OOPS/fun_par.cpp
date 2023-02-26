#include<bits/stdc++.h>
using namespace std;
int add(int x, int y){ return x+y;}
int multiply(int x, int y){return x*y;}
int invoke(int x, int y, int(*func)(int, int)){
    return func(x,y);
}
int main(){
    cout<<invoke(20,10,&add)<<endl;
    cout<<invoke(20,10,&multiply)<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
   return n*fact(n-1); //non tail recursive
}
int fact(int n,int k){
    if(n==0){
        return k;
    }
    return fact(n-1,n*k); //tail recursive
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}

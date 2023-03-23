#include<bits/stdc++.h>
using namespace std;
int getSum(int n){
    if(n<=0) return n;
    else return getSum(n/10)+n%10;
}
int main(){
    int n;
    cin>>n;
    cout<<getSum(n);
    return 0;
}
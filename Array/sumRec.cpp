#include<bits/stdc++.h>
using namespace std;
int getSum(int n){
    if(n==0)return 0;
    return n+getSum(n-1);
}
int main(){
int n;
cin>>n;
cout<<getSum(n);
return 0;
}
 
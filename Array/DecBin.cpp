//This number returns binary equivalent of a decimal number.
#include<bits/stdc++.h>
using namespace std;
void DecToBin(int n){
    if(n==0){
        return;
    }
    DecToBin(n/2);
    cout<<n%2;
}
//driver code starts here
int main(){
    int n;
    cin>>n;
    DecToBin(n);
    return 0;
}
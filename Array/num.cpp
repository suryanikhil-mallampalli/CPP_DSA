#include<bits/stdc++.h>
using namespace std;
void Num(int n){
    if(n==0){
        return;
    }
    Num(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    Num(n);
    return 0;
}
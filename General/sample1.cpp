#include<iostream>
using namespace std;
int main(){
    int n=9;
    int space=((2*n-1)/2)+1;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=i-1;k>0;k--){
            cout<<k;
        }
        cout<<endl;
        space--;
    }
}
#include<iostream>
using namespace std;
// positions begin with 0
int jos(int n, int k){
    if(n==1) return 0;
    return (jos(n-1,k)+k)%n;
}
// if the positions begin with 1
// int myJos(int n, int k){
    // return jos(n,k)+1;
// }

int main(){
    cout<<jos(5,3)<<endl;
}

// O(N)
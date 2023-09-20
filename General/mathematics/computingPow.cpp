#include<iostream>
using namespace std;
// efficient solution
// pow(x,n) ==> if n%2==0: pow(x,n/2)*pow(x,n/2)
//              else: pow(x,n-1)*x

int pow(int x, int n){
    if(n==0) return 1;
    int temp = pow(x,n/2); // used recursion
    temp = temp*temp;
    if(n%2==0) return temp;
    else return temp*x;
}


int power(int x, int n){
    int res = 1;
    while(n>0){
        if(n%2 != 0) res*=x; // using bit exponention // n&1
        x*=x;
        n/=2; // n=n>>1;
    }
    return res;
}
// T.C. O(log(N))  S.C. O(1)

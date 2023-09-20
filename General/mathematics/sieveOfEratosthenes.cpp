// For this naive solution will be having O(N*(N**(1/2)))
// we have to print all the prime numbers till the given number
#include<iostream>
#include<vector>
using namespace std;

// optimized is Prime code
bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}

// Sieve of Eratosthenes
void sieve(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2;i*i<n;i++){
        // we only want prime numbers 
        if(isPrime[i]){
            // making the prime numbers multiples as false
            for(int j=2*i;j<n;j+=i){ // for more optimization we can start as j= i*i
                isPrime[j]=false;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(isPrime[i]) cout<<i<<" ";
    }
}
// T.C. O(N*log(log(N))) ~ ALMOST LINEAR

// reducing code length
void sieveReduce(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<" ";
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    } 
}


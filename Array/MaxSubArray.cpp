//Kadane algorithm
#include<bits/stdc++.h>
#define vi vector<int>// macros increase speed
using namespace std;
const int N=1e5+2;
signed main(){
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curr=0,maxSum=0;
    for(int i=0;i<n;i++){
        curr+=a[i];
        if(curr<0){
            curr=0;
        }
        maxSum=max(maxSum,curr);
    }
    cout<<maxSum<<endl;
}
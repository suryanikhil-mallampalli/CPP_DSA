#include<bits/stdc++.h>
using namespace std;
int average(int arr[], int n) throw (string){//throw can be done at the declaration of function itself
    if(n==0){
        throw string("Array size is zero");
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum/n;
}
//utility code
int32_t main(){
    int arr[]={4,52};
    int n=0;
    try{
        int res=average(arr,n);
        cout<<res;
    }
    catch(string &e){
        cout<<e;
    }
    cout<<"\nBye";
    return 0;
}

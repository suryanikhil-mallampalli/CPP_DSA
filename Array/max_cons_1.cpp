// Find count of maximum consecutive 1s in a binary array.

#include<bits/stdc++.h>
using namespace std;

int max_ones(vector<bool> &arr, int n){
    int ans=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) cnt=0;
        else{
            cnt++;
            ans=max(ans,cnt);
        }
    }
    return ans;
}

int main(){
    vector<bool> arr={0,1,1,0,1,1,1};
    int n=arr.size();
    int ans = max_ones(arr,n);
    cout<<ans;
}
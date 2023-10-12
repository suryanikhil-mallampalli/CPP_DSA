#include<bits/stdc++.h>
using namespace std;

int maxSum_of_subarray (vector<int> arr, int n){
    int ans=0;
    int maxEnding = arr[0];
    for(int i=1;i<n;i++){
        maxEnding = max(maxEnding+arr[i],arr[i]);
        ans = max(ans,maxEnding);
    }
    return ans;
}


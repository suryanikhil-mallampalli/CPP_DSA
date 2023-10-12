// Given an array of N non-negative integers arr[ ] representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after rain.

// Note: The array elements represent the height of the bars.

#include<bits/stdc++.h>
using namespace std;

int trap_max_water(vector<int> arr){
    int n=arr.size();
    int res=0;
    int lMax[n];
    int rMax[n];
    lMax[0]=arr[0];
    rMax[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        lMax[i]=max(lMax[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        rMax[i]=max(rMax[i+1],arr[i]);
    }
    for(int i=1;i<n-1;i++) res+=(min(lMax[i],rMax[i]) - arr[i]);
    return res;

}
// O(N), O(N)
int main(){
    vector<int> arr={5,0,6,2,3};
    int ans = trap_max_water(arr);
    cout<<ans;
}
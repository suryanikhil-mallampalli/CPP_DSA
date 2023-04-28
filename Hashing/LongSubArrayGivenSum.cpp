// Returning the length of maximum subarray for the given 
// array and subarray sum equals given input sum

#include"bits/stdc++.h"
using namespace std;

// //Naive Method
// int maxLength(vector<int> arr, int n, int sum){
//     int res=0;
//     for(int i=0;i<n;i++){
//         int curSum=0;
//         for(int j=i;j<n;j++){
//             curSum+=arr[j];
//             if(curSum==sum){
//                 res=max(res, j-i+1);
//             }
//         }
//     }
//     return res;
// }

// Solution using Hash
int maxLength(vector<int> arr, int n, int sum){
    unordered_map<int, int> h; //hashMap
    int res=0, curSum=0;
    for(int i=0;i<n;i++){
        curSum+=arr[i];
        if(curSum==sum){
            res=i+1;
        }
        if(h.find(curSum)==h.end()){
            h.insert({curSum,i});
        }
        if(h.find(curSum-sum)!=h.end()){
            res=max(res, i-h[curSum-sum]);
        }
    }
    return res;
}

//Driver Code
int32_t main(){
    vector<int> arr{5,2,3,4};
    int sum=0, n=arr.size();
    cin>>sum;   
    cout<<maxLength(arr, n,sum);
    return 0;
}
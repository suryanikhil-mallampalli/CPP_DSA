// Given binary input we have to input the longest subsequence 
// lenghth, where the number of zeroes and ones are equal.

#include"bits/stdc++.h"
using namespace std;

// //naive method
// int fun(vector<int> arr, int n){
//     int res=0;
//     for(int i=0; i<n;i++){
//         int c0=0,c1=0;
//         for(int j=i;j<n;j++){
//             if(arr[j]==0){
//                 c0++;
//             }
//             else{
//                 c1++;
//             }
//             if(c1==c0){
//                 res=max(res, c1+c0);
//             }
//         }
//     }
//     return res;
// }


// hash method
int fun(vector<int> arr, int n){
    replace(arr.begin(), arr.end(), 0,-1);
    unordered_map<int, int> h;
    int res=0, curSum=0, sum=0;
    
    for(int i=0;i<n;i++){
        curSum+=arr[i];
        if(curSum==sum){
            res=i+1;
        }
        if(h.find(curSum-sum)==h.end()){
            h.insert({curSum, i});
        }
        if(h.find(curSum-sum)!=h.end()){
            res=max(res,i-h[curSum-sum]);
        }
    }
    return res;
}


//driver code
int main(){
    vector<int> arr{1,0,1,1,1,0,0,0}; //static allocation of input
    int n=arr.size();
    cout<<fun(arr, n);
    return 0;
}
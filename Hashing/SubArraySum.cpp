//  Desciption of Question
//  Given an Array the sum of any sub array in the 
//  array should be equal to input number inorder to return true


#include"bits/stdc++.h"
using namespace std;

//Naive Method
// bool isSubArrSum(int arr[],int n, int sum){
//     for(int i=0; i<n; i++){
//         int curSum=0;
//         for(int j=i;j<n;j++){
//             curSum+=arr[j];
//             if(curSum==sum){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// Hash function
bool isSubArrSum(vector<int> arr, int n, int sum){
    unordered_set<int> h; //hashList
    int curSum=0;
    for(int i=0;i<n;i++){
        curSum+=arr[i];
        if(curSum==sum){
            return true;
        }
        if(h.find(curSum-sum)!=h.end()){
            return true;
        }
        h.insert(curSum);
    }
    return false;
}

//Driver Code
int32_t main(){
    vector<int> arr{5,3,2,-1};
    int sum=11, n=arr.size();
    cout<<isSubArrSum(arr, n, sum);
    return 0;
}
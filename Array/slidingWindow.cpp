//This is sliding window algorithm 
//problem: We have to find maximum sum of k continuos elements, given n elements(n>k) in O(n)
#include<bits/stdc++.h>
using namespace std;
// Returns maximum sum in a subarray of size k.
int maxSum(int arr[], int n, int k){
    //n>k condition
    if(n<k){
        cout<<"Invalid";
        return -1;
    }
    //sum of first window size of k
    int window_sum=0;
    for(int i=0;i<k;i++){
        window_sum+=arr[i];
    }
    int max_windowSum=window_sum;
    // Compute sums of remaining windows by removing first element of previous window and adding last element of current window.
    for(int i=k;i<n;i++){
        window_sum+=(arr[i]-arr[i-k]);
        max_windowSum=max(max_windowSum, window_sum);
    }
    return max_windowSum;
}
//driver code
int main(){
    int n, k;
    cin>>n>>k;
    int  arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSum(arr, n,k);
    return 0;
}
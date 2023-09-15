// array is given, sum is given, we have to return that finds the count of the array's subsets that are having given sum.
#include<iostream>
using namespace std;
// using simple recursion
int countSubsets(int arr[], int n, int sum){
    if(n==0) return (sum==0)?1:0;
    return countSubsets(arr,n-1,sum)+countSubsets(arr,n-1,sum-arr[n-1]);
}
// O(2^n)
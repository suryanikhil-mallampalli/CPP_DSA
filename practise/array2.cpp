// Find minimum number of merge operations to make an array palindrome
// Reference: https://www.geeksforgeeks.org/find-minimum-number-of-merge-operations-to-make-an-array-palindrome/

#include<iostream>
using namespace std;

int findMinOpds(int arr[], int n){
    int res =0; // initialize the result

    // Start from two corners
    for(int i=0, j=n-1; i<=j;){
        // If corner elements are same, problem reduces arr[i+1..j-1]
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        // If left element is greater, then we merge right 2 elements
        else if(arr[i] > arr[j]){
            j--;
            arr[j] += arr[j+1];
            res++;
        }
        // Else we merge left 2 elements
        else{
            i++;
            arr[i] += arr[i-1];
            res++;
        }
    }
    return res;
}
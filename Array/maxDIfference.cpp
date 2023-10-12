// Given an array arr[] of integers, find out the maximum difference 
// between any two elements such that the larger element appears after the smaller number. 
#include<bits/stdc++.h>
using namespace std;

int maxDifference(vector<int> arr){
    int n= arr.size();
    int max_diff=arr[1]-arr[0];
    int min_element = arr[0];
    for(int j =1;j<n;j++){
        max_diff = max(max_diff, arr[j]-min_element);
        min_element = min(min_element, arr[j]);
    }
    return max_diff;
}

int main(){
    vector<int> v = {11,20,20,25,25,25,40};
    cout<< maxDifference(v);
    return 0;
}
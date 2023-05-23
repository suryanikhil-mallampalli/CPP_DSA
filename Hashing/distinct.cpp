// have to return number of unique elements existing in given array

#include"bits/stdc++.h"
using namespace std;

int countDistinct(vector<int> arr, int n){
    unordered_set<int> s; //hashset
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end()){
            s.insert(arr[i]);
        }
    }
    return s.size();
}

int fun(int arr[], int n){
    unordered_set<int>  s(arr, arr+n);
    return s.size();
}
int main(){
    vector<int> arr{1,2,3,4,4,4,4,4,4,8,9,10};
    int n=arr.size();
    cout<<countDistinct(arr, n);
    // cout<<fun(arr,n);
    return 0;
}
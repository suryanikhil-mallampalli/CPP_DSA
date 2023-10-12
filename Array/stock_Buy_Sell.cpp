// The cost of a stock on each day is given in an array. Find the maximum profit that you can make by buying and selling on those days. If the given array of prices is sorted in decreasing order, then profit cannot be earned at all.

#include<bits/stdc++.h>
using namespace std;

// Naive solution

int bestStock(vector<int> arr){
    int n=arr.size();
    int profit =0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1])  profit = profit + arr[i] - arr[i-1];
    }
    return profit;
}


int main(){
    vector<int> v={1,5,3,8,12};
    cout<<bestStock(v);
    return 0;
}
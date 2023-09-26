#include<bits/stdc++.h>
using namespace std;
bool helper(pair<int, int> a, pair<int, int> b){
    double r1 =(double)a.second/a.first;
    double r2 = (double)b.second/b.first;
    return r1>r2;
}
double fractional_knapsack(pair<int, int> arr[], int n, int k){
    sort(arr, arr+n, helper);
    double ans=0;
    int curr_cap=k;
    for(int i=0;i<n;i++){
        if(curr_cap>=arr[i].first){
            ans +=arr[i].second;
            curr_cap-=arr[i].first;
        }
        else{
            ans += arr[i].second*((double)curr_cap/arr[i].first);
            return ans;
        }
    }
// O(NlogN)
}
// we have to determine with the given array whether a continuos 
// subarray exist whoose sum is 0
// if it exists return true else false

#include"bits/stdc++.h"
using namespace std;
bool is0Subarray(vector<int> arr, int n){
    unordered_set<int> s; //hashset
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum == 0 || s.find(sum) != s.end()){
            return true;
        }
        s.insert(sum);
    }
    return false;
}
int32_t main(){
    vector<int> arr{3,4,-3,-1,1};
    int n=arr.size();
    cout<<is0Subarray(arr, n);
    return 0;
}

//we have to print the each element and its frequency

#include"bits/stdc++.h"
using namespace std;

void freq(vector<int> arr, int n){
    unordered_map<int, int> h;
    for(int i=0;i<n;i++){
        h[arr[i]]++;
    }
    for(auto x:h){
        cout<<x.first<<" "<<x.second<<endl;
    }
    // O(n)-Time Space
}
int main(){
    vector<int> arr{10,20,20,10,30,10};
    int n=arr.size();
    freq(arr, n);
    return 0;
}
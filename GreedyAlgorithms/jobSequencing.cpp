#include<bits/stdc++.h>
using namespace std;
bool myCmp(pair<int, int> a, pair<int,int> b){
    return a.second > b.second ;
}
int jobSeq(pair<int, int> arr[], int n){
    sort(arr, arr+n, myCmp);
    int res =0;
    int slot[n];
    for(int i=0;i<n;i++) slot[i] =0;
    for(int i=0;i<n;i++){
        for(int j=min(n, arr[i].first)-1;j>=0;j--){
            if(slot[j]==0){
                res += arr[i].second;
                slot[j] =1;
                break;
            }
        }
    }
    return res;
}
 
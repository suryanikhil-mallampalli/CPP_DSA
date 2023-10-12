// Given a sorted array, arr[] consisting of N integers, the task is to find the frequencies of each array element.
#include<bits/stdc++.h>
using namespace std;

void printFreq(vector<int> arr){
    int n=arr.size();
    int freq=1, i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<"\n";
        freq=1;
        i++;
    }
    if(n==1 || arr[n-1]!= arr[n-2]){
        cout<<arr[n-1]<<" "<<1<<"\n";
    }
}
// O(N) and O(1)
int main(){
    vector<int> v = {11,20,20,25,25,25,40};
    printFreq(v);
    return 0;
}
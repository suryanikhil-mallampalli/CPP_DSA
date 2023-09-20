// Sort an array according to another Array

#include<bits/stdc++.h>
using namespace std;

void pairSort(int a[],char b[], int n){
    pair<int, char> arr[n];
    for(int i=0;i<n;i++){
        arr[i] = {a[i],b[i]};
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        b[i] = arr[i].second;
    }
    for(int i=0;i<n;i++){
        cout<<"("<<arr[i].first<<","<<arr[i].second<<")"<<" ";
    }
}

int main()
{   
    // Sample Inputs
    int a[] = {2, 1, 5, 4, 8, 3, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    char b[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    
    pairSort(a, b, n);
    
    return 0;
}
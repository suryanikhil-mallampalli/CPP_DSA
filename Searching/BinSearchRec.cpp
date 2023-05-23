#include<bits/stdc++.h>
using namespace std;
int bSearch(int arr, int low, int high, int x ){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[&mid]==x){
        return mid;
    }
    else if(arr[&mid]>x){
        return bSearch(arr, low, mid-1, x);
    }
    else{
        return bSearch(arr,mid+1,high,x);
    }
}
int main(){
    int n, key, mid, low, high;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>key;
    cout<<bSearch(arr[n],0,n-1, key);
}
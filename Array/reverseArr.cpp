// This i have tried using recursion, reversing of array.
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    //swap elements at start and end
    int temp=0;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    //recursive calling
    reverseArray(arr,start+1,end-1);
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}
//driver code 
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0, end=n-1;
    reverseArray(arr, start, end);
    printArray(arr, n);
    return 0;
}

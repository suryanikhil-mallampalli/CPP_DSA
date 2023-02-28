//Rotate an Array usign temp array
#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int d, int n){
  int temp[n];
  int k=0;
  //loading the elements from d to n-1 into temp
  for(int i=d; i<n;i++){
    temp[k]=arr[i];
    k++;
  }  
  //now loading the first d elements in the same order into the temp
  for(int i=0;i<d;i++){
    temp[k]=arr[i];
    k++;
  } 
    //copying elements from temp to arr
  for(int i=0;i<n;i++){
    arr[i]=temp[i];
  }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}
//driver code
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int N=sizeof(arr)/sizeof(arr[0]);
    int d=8;
    rotate(arr,d,N);
    printArray(arr,N);    
    return 0;
}
//T.C.= O(N)
//Auxilary space= O(N)
//  Given an array, the task is to write a program to print all the LEADERS in the array.
//  An element is leader if it is greater than all the elements to its right side.

#include<bits/stdc++.h>
using namespace std;
void findLeaders(vector<int> arr){
    int n=arr.size();
    int curr_max=arr[n-1];
    cout<<curr_max<<" ";
    for(int i=n-2;i>=0;i--){
        if(curr_max < arr[i]){
            curr_max = arr[i];
            cout << curr_max << " ";
        }
    }
}
int main(){
    vector<int> arr={7,10,4,10,6,5,2};
    findLeaders(arr);
}
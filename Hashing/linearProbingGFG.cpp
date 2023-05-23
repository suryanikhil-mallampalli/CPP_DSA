
#include<bits/stdc++.h>
using namespace std;
vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        //Your code here
        vector<int> hash(hashSize, -1);
        for(int i=0;i<sizeOfArray;i++){
            int key=arr[i]%hashSize;
            if(hash[key]==-1){
                hash[key]=arr[i];
            }
            else{
                int j=1;
                while(hash[(key+j)%hashSize]!=-1){
                    j++;
                }
                hash[(key+j)%hashSize]=arr[i];
            }
        }
        return hash;
        
    }
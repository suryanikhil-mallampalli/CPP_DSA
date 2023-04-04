#include<bits/stdc++.h>
using namespace std;
// structure for Myhash was declared here.
struct MyHash
{
    int *arr;
    int cap,size;
    
    MyHash(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap]; //Dynamically declared array
        for(int i=0;i<cap;i++)
            arr[i]=-1;// keeping every empty element as -1
    }
    // This is the created hash function
    int hash(int key){
        return key%cap;
    }
    // For inserting a new key in the hash table
    bool insert(int key)
    {
        if(size==cap)
            return false;
        int i=hash(key);
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
            i=(i+1)%cap; // Updating the hash value
        if(arr[i]==key)// checking whether it is already existence
            return false;
        else{
            arr[i]=key;// inserting
            size++;
            return true;
        }
    }
    // For searching a key in hash table
    bool search(int key)
    {
        int h=hash(key);
        int i=h; //storing initial value.
        while(arr[i]!=-1){
            if(arr[i]==key)// if found key return True
                return true;
            i=(i+1)%cap; // Updating hash value
            if(i==h) // If the total table searching completed
                return false;
        }
        return false;
    }
    // For deleting a key in hish table
    bool erase(int key)
    {   
        int h=hash(key);
        int i=h; 
        while(arr[i]!=-1){
            if(arr[i]==key){
                arr[i]=-2; // after deleting we are replacing the slot with -2.
                return true; // for successful deletion
            }
            i=(i+1)%cap;
            if(i==h)
                return false; // we have not found the key, but the whole hastable trvaersal was done : Unable to delete
        }
        return false; // unable to delete.
    }
};
// Driver Code.
int main() { 
	MyHash mh(7);
	mh.insert(49);
	mh.insert(56);
	mh.insert(72);
	if(mh.search(56)==true)
	    cout<<"Yes"<<endl;
	else
	    cout<<"No"<<endl;
	mh.erase(56);
	if(mh.search(56)==true)
	    cout<<"Yes"<<endl;
	else
	    cout<<"No"<<endl;
} 

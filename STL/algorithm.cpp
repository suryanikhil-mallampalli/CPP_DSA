#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);

    // binary search
    cout<<binary_search(v.begin(),v.end(),4)<<endl;
    // lower bound
    cout<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    // upper bound
    cout<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    // finding maximum
    int a=3;
    int b=4;
    cout<<max(a,b)<<endl;

    // swapping 2 numbers
    swap(a,b);
    cout<<a<<endl;

    // reversing 
    string s = "surya";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    //rotating the word
    rotate(v.begin(),v.begin()+1, v.end());
    cout<<"after rotation: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    // sorting
    sort(v.begin(),v.end());
    cout<<"after sorting: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;




}
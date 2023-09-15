#include<bits/stdc++.h>
using namespace std;
struct point{
    int x;
    int y;
};
int32_t main(){
    point arr[5];
    for(int i=0;i<5;i++){
        arr[i].x=i;
        arr[i].y=i*10;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i].x<<" "<<arr[i].y<<endl;
    }
    return 0;
}

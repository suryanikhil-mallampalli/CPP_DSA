#include<bits/stdc++.h>
using namespace std;
struct point{
   int x;
   int y;
};
int32_t main(){
    point p={10,20};
    point *ptr=&p;
    cout<<ptr->x<<" ";
    ptr->x=30;
    cout<<p.x; 
    return 0;
}

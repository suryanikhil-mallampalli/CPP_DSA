#include<iostream>
using namespace std;
struct point{
    int x;
    int y;
};
int main(){
    struct point p;//writing struct is optional in cpp
    p.x=10;
    p.y=20;
    cout<<p.x<<" "<<p.y;
    return 0;

}
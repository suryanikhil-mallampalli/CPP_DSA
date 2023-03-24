//Rules for Tower of Hanoi
// only one disk can move at a time
// no larger disk above smaller
// we cvan move only the top disk

//TOH(number, from tower, auxilary tower, target tower)
#include<bits/stdc++.h>
using namespace std;
void TOH(int n, char A,char B, char C){
    if(n==1){
        cout<<"Move disk 1 from rod "<<A<<" to rod "<<C<<endl;
        return;
    }
    TOH(n-1,A,C,B);
    cout<<"Move disk "<<n<<" from rod "<<A<<" to rod "<<C<<endl;
    TOH(n-1,B,A,C);
}
int main(){
    int n;
    cin>>n;
    TOH(n,'A','B','C');
    return 0;
}
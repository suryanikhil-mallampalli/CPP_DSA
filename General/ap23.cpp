//code for decimal to binary using functions
#include <iostream>
using namespace std;
int decimaltobinary(int n){
    int x=1;
    int ans=0;
    while(x<=n)
        x*=2;
        
    x/=2;
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=2;
        ans=ans*10+lastdigit;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimaltobinary(n);
    return 0;
}

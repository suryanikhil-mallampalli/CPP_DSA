#include<iostream>
using namespace std;
int main()
{
    int n,ctr=0;
    cout<<"plaese ra oka number ivvi: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
          ctr=ctr+1;
        }
    }
    if(ctr==2)
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number"<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;
 
int main()
{
    int a,b,c;
     cin>>a>>b>>c;

     if(a>b){
         if(a>c){
             cout<<a<<" is bigger than all numbers"<<endl;
         }
         else{
             cout<<c<<" is bigger than all numbers"<<endl;
         }
     }
         else{
             if(b>c){
                 cout<<b<<" is greater than all numbers"<<endl;
             }
             else{
                 cout<<c<<" is bigger than all numbers"<<endl;
             }
         }
         return 0;
}

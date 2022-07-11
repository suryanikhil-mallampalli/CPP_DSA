#include<iostream>
using namespace std;
int main()
{
    int pocketmoney=3000;
    for(int date=1;date<=30;date++)
    {
        if(date%2==0){
            continue;//will skip the loop once
        }
        if(pocketmoney==0){
            break;//final stop for the loop
        }
        cout<<"you can go out today"<<endl;
        pocketmoney=pocketmoney-300;
    }
}
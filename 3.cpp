#include<iostream>
using namespace std;
int num;
class Mu {

    public:
    int num;
    void multiplication()
    {
    cout<<num*10;
    } 
};
int main()
{
    Mu pop;

    cout<<"print a number"<<endl;
    cin>>pop.num;
    pop.multiplication();
    return 0;
}
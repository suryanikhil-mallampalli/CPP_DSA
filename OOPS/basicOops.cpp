#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int real;
        int img;
    public:
        void print(){
            cout<<real<<"+i"<<img<<endl;
        }
        Complex(int r, int d){
            real=r;
            img=d;
        }
};
int main(){
    Complex c1(10,15);
    c1.print();
    return 0;

}
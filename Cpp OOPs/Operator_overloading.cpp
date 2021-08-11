#include <iostream>
using namespace std;

class Complex
{
    int re,im;
    public:
        void getdata(int x,int y)
        {
            re=x;
            im=y;
        }

        void showdata()
        { cout<<re<<" "<<im;
                             }

        Complex operator +(Complex c) //Overloading + Operator Compile Time Polymorphism 
        {
            Complex temp;
            temp.re=re+c.re;
            temp.im=im+c.im;
            return temp;
        } 
};

int main()
{
    Complex c1,c2,c3;
    c1.getdata(4,5);
    c2.getdata(4,5);
    c3=c1+c2;
    c3.showdata();

}
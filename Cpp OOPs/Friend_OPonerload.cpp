#include <iostream>
using namespace std;
//Friend Function For Operator Overloading
class Complex
{
    int re,im;
    public:
        void setdata(int x,int y)
        {
            re=x;
            im=y;
        }
        void Showdata()
        {cout<<re<<" "<<im;}
        friend Complex operator +(Complex,Complex);
};

Complex operator +(Complex c1,Complex c2) //Defining Friend Function
{
    Complex temp;
    temp.re=c1.re+c2.re;
    temp.im=c1.im+c2.im;
}

int main()
{
    Complex a,b,c;
    a.setdata(5,6);
    b.setdata(5,6);
    c=a+b;
    c.Showdata();
    return 0;
}
//OPerator Overloading using friend function 
#include <iostream>
using namespace std;
class Complex
{
    int re,im;
    public:
        void setdata(int x,int y)
        {
            re=x;
            im=y;
        }
        void showdata()
        {cout<<re<<"  "<<im;}
        friend Complex operator -(Complex);
};


Complex operator -(Complex o1)
{
    Complex temp;
    temp.re=-o1.re;
    temp.im=-o1.im;

    return temp;
}

int main()
{
    Complex c1,c2;
    c1.setdata(4,5);
    c2=-c1;
    c2.showdata();
    return 0;
}
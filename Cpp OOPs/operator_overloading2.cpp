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

        Complex operator -() //Overloading + Operator Compile Time Polymorphism 
        {
            Complex temp;
            temp.re=-re;
            temp.im=-im;
            return temp;
        } 
};

int main()
{
    Complex c1,c2,c3;
    c1.getdata(4,5);
    c2=-c1;
    c2.showdata();

}
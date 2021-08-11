//Friend Function is not a member Function it can access Member Function of any class to which it is friend
//It has no caller Object
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
    { cout<<re<<" "<<im; }
    
    friend void fun(Complex);  //Declaration of Friend Function
};

void fun(Complex c)   // Defination of friend Function Without Membership Label that is classname:: 
{
    cout<<c.re<<" "<<c.im;
}
int main()
{
    Complex c1;
    c1.getdata(5,6);
    fun(c1);
}
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
        {
            cout<<re<<" "<<im;
        }

        Complex add(Complex c)    // Return Type Complex
        {
            Complex temp;
            temp.re=re+c.re;   // c1 is caller object So we dont need to write c1.re+c2.re 
            temp.im=im+c.im;

            return temp;
        } 
};

int main()
{
    Complex c1,c2,c3;
    c1.getdata(4,5);
    c1.showdata();
    cout<<endl;
    c2.getdata(4,5);
    c2.showdata();
    cout<<endl;
    c3=c1.add(c2);
    c3.showdata();
}




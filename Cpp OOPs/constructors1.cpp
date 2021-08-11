#include <iostream>
using namespace std;

class Complex
{
    int re,im;

    public:
    Complex()      // Default Constructor with no Arguments 
    { cout<<"Hello Constructor "<<endl; }
    
    
    Complex(int x,int y) //Paramatrized Constructor as We Pass Arguments 
    { 
        re=x;
        im=y;
        cout<<re<<" "<<im<<endl;
      }
    
    Complex (int k) //Paramatrized Constructor With Argument And Constructor overloading
    { re=k;
      cout<<re;   
         }
    Complex(Complex &c) // passing Address Of Constructor
    {
        re=c.re;
        im=c.im;
        cout<<"\nCopy Constructor is Called ";
    }     
};

int main()
{
    Complex c1;  //Default Constructor Called
    Complex c2(4,5); // Second Constructor Called
    Complex c3(4); // Third Constructor Called
    Complex c4(c1); //Copy Constructor is Called
}
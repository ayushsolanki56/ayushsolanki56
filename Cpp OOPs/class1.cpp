#include <iostream>
using namespace std;

class Complex
{
    int re,im;       //Class instant variables created only when object id created
    
    //Access specifiers
    public:
        void setdata(int x,int y)  // Member Functions 
        {
            re=x;
            im=y;
        }
        void showdata()    // Member Functions
         {
            cout<<re<<" "<<" "<<im;
        }
        void update(void); // Declaring Member Function and giving defination outside class
};

void Complex::update()  //Using Scope Resolution Operator (classname + :: =Membership Label
{
    re=re+5;
    im=im+5;
}

int main()
{

    Complex c1;  //Creating Object

    c1.setdata(4,5);//Member Function can be used by objects Only 
    c1.showdata();
    cout<<endl; 
    c1.update();
    c1.showdata();
    return 0;
}
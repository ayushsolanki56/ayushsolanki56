//this is a Keyword
//this is a Local Object Pointer in every instance member Function
//containing address of caller object
//It is used to refer caller Object in member function

#include <iostream>
using namespace std;

class Shape
{
  
    int l,b,h;
    public:
        void setdim(int l,int b, int h){
         this->l=l;  // this is used to refer instance member of an object
         this->b=b;
         this->h=h;   
        }
        void showdata()
        {cout<<l<<" "<<b<<" "<<h;}
};
int main()
{
    Shape mybox;
    mybox.setdim(12,13,14);
    mybox.showdata();
}
#include <iostream>
using namespace std;

//Single Inheritance == Visibilty Mode Public 
//Public member of base class is Public and Private member is private and protected is protected

class Vehicle
{
 int speed;
 float mileage;
 public:
    void setval(int x,float y)
    {
         speed=x;
         mileage=y;
    }
    void showvalue()
    {
     cout<<speed<<" "<<mileage;
    }
};
class Car : public Vehicle  //Public Mode of Inheritance 
{
 int t=4;
 public: 
    void showvalue1()
    {
         cout<<"Car has Tires = "<<t<<" ";
         showvalue();
    }
 
};

int main()
{
    Car o1;
    o1.setval(300000,32.4); // we can Access PArent class Public Member with childs class Object
    o1.showvalue1();
}
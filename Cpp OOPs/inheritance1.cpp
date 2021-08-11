#include <iostream>
using namespace std;
// Inheritance Using Protected Visibilty mode
class Vehicle
{
    int capacity;
    int gears;
    float price;

    public:
        void set_val(int x,int y,int z)
        {
            capacity=x;
            gears=y;
            price=z;
        }

        void show()
        {cout<<"The Attrubutes of Vehicles are : "<<capacity<<" "<<gears<<" "<<price;}
};

class Bike : protected Vehicle // Visibility Mode Protected 
{
    public:
    void result(int a,int b,int c )
    {
        set_val(a,b,c);
        show();
    }

};


int main()
{
    Bike b1;
    b1.result(2,4,45000.90);
}





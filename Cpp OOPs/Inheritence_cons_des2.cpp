#include <iostream>
using namespace std;
//Execution of Constructor and Destructor 
class A
{
 int a;
 public:
    A(int x)
    {a=x;
     cout<<a<<endl; }

    ~A()
    {
        cout<<"Bye class A ";
    } 
};

class B:public A
{
 int b;
 public:
    B(int z, int y):A(z) //If no Default Constructor present it will Throw error otherwise it will execute
    {b=y;                //Parent class ka  Constructor To call hoga chuld class ka constructor banta he to 
    cout<<b<<endl;
     }

    ~B()
    {cout<<"Bye class B ";} 
};

int main()
{
    B b(4,5);   //B():A() it will always Happened
}






// #include <iostream>
// using namespace std;
// //Execution of Constructor and Destructor
// class A
// {
//  int a;
//  public:
//     A(int x)
//     {a=x;
//      cout<<a; }

//     ~A()
//     {
//         cout<<"Bye class A ";
//     } 
// };

// class B:public A
// {
//  int b;
//  public:
//     B(int y)
//     {b=y;
//     cout<<b;
//      }

//     ~B()
//     {cout<<"Bye class B ";} 
// };

// int main()
// {
//     B b(4);
// }

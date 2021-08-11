#include <iostream>
using namespace std;

// Important Note
// In a Case Of Constructor  Inheritance :

// 1->Base class Constructor will be first Called and Then it will call the Constructor of 
// the parent class 
// 2->Execution of constructor of Parent class Will be First Happened nd then child class 

// In a Case Of Destructor Inheritance :

// 1->Base class Destructor will be first Called and Then it will call the Destructor of 
// the parent class 
// 2->Execution of Destructor of Child class Will be First Happened nd then Parent class 



class A
{
    int a;
    public:
        A()
        { cout<<"We are in a constructor A \n"; }
};


class B:public A
{

    int b;
    public:
        B() // BY defulat it is as equal as B():A()
        {cout<<"We are in a Constructor B ";}
};


int main()
{
    B b;
}






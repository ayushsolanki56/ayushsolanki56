//Friend function can be Friend of Two or More Classes

#include <iostream>
using namespace std;
class B;  // Declaration Of Class So that Compiler will know
class A
{
    int a;
    public:
        void setadata(int x){a=x;}
        friend void fun(A,B);
};
class B
{
    int b;
    public:

        void setadata(int y){b=y;}

        friend void fun(A,B);
};
void fun(A o1,B o2)
{
    cout<<"Sum is  "<<o1.a+o2.b;
}
int main()
{
    A o1;
    B o2;
    o1.setadata(5);
    o2.setadata(5);
    fun(o1,o2); //Passing Two Objects
    return 0;
}
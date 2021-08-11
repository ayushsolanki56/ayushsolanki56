// Friend Class 

#include <iostream>
using namespace std;

class A
{
    int a=90;
    public:
    void showdata()
    {cout<<a;}
};
class B
{
    public:
    void showA(A& x)
  {  cout<<x.a}
};
int main()
{
 A a;
 B b;
 b.showA(a);
}
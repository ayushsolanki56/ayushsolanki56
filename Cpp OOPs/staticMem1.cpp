#include <iostream>
using namespace std;

class Bank
{
    int balance;
    static int roi; // class Members

    public:
        void getdata(int x)
        {
            balance=x;
        }

       static void setroi(int y) //class Member Function can access only static members
        {
            roi=y;
        }
        
        void showdata()
        {
            cout<<balance<<" "<<roi;
        }
};

int Bank::roi=0; // They Must be initialised outside the class 
int main()
{
    Bank b1;
    b1.getdata(5);
    b1.showdata();
    cout<<endl;
    Bank::setroi(5); //Using Static Member Function without Using Object 
    b1.showdata();

}
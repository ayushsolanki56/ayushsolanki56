#include <iostream>
#include<string>
using namespace std;

//Declaring C structures and provide Defination Memory is not allocated in Defination
struct book {
int id;    
string name;
float price;
};


//USing it in main Function

int main()
{
    book b1,b2;   //Defining Variable of book type Here memory is allocated 

    b1={1,"Aayush ",200.0}; //Assigining Values to structure

    // Another way of Initialisation

    b2.id=2;
    b2.name="Purva";
    b2.price=290.09;
    
// Displaying the Structure Variables

    cout<<b1.id<<" "<<b1.name<<" "<<b1.price<<endl;
    cout<<b2.id<<" "<<b2.name<<" "<<b2.price;
    return 0;
}             
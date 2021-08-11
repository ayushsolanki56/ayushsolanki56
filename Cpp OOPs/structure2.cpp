#include <iostream>
#include<string>
using namespace std;

//Declaring C structures and provide Defination Memory is not allocated in Defination
struct book {
int id;    
string name;
float price;
};
book input();
void display1(book b);


int main()

{
    
    book b1;
    b1=input();
    display1(b1);
    return 0;
}

// Functions to take Input and Displaying Structure Members 

book input()
{
    book b;
    cout<<"Enter the Attributes of Book ";
    cin>>b.id>>b.name>>b.price;
    return(b);
}
void display1(book b)
{
    cout<<"The values are : "<<b.id<<" "<<b.name<<" "<<b.price;
}            
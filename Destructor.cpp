//This program demonstrates the use of destructor

#include<iostream>
using namespace std;

class rectangle
{
int length, width;
public:
rectangle(){ //Constructor
length=0;
width=0;
cout<<”Constructor Called”;
}
~rectangle(){ //Destructor
cout<<”Destructor Called”;
}
// other functions for reading, writing and processing can
//be written here
};

int main()
{
rectangle x;
// default constructor
 
}

//Once the program terminates the
//destructor is called

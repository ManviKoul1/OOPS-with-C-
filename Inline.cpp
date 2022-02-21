//This program demonstrates the use of INLINE Function

#include<iostream>
using namespace std;

inline int cube(int a) //inline function directly replace your code in program
                       //in this updated function will get called
{
 return a*a*a;
}
int main()
{
 cout << "Cube is "<<cube(3);
 return 0;
}

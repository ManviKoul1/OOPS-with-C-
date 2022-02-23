//C++ program to print sum and average of two variables by taking input from user

#include<iostream>
using namespace std;

int main()
{
 double num1,num2,sum,average;
 
 cout << "Enter 1st number : ";
 cin >> num1;
 
 cout << "Enter 2nd number : ";
 cin >> num2;
 
 sum = num1 + num2;
 average = sum / 2;
 
 cout << "Sum of two numbers is : "<< sum << "\n" ;
 cout << "Average of two numbers is : "<< average << "\n";
 return 0;
}

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
 ifstream input;
 string str;
 input.open("data.txt");
 
 if(!input)
 cout<<"file did not open \n"<<endl;
 else
 {
  while(input>>str)
  {
  cout<<str<<endl;
  }
 }
}

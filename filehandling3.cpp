#include<iostream>
#include<fstream>
using namespace std;

int main()
{
 fstream fin,fout;
 fin.open("data.txt");
 fout.open("data1.txt ",ios::app);
 char ch;
 
 while(!fin.eof())
 {
  fin.get(ch);
  fout<<ch;
 }
 cout<<"coppppiiiieeedd!!!!!!!!!!"<<endl;
 fin.close();
 fout.close();
}

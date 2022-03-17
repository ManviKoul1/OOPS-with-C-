#include<iostream>
#include<fstream>
using namespace std;

class student
{
public:
int roll;
 char name[25];
 float marks;
 void display()
 {
  fstream f;
  student s;
  f.open("student.dat",ios::in|ios::binary);
  while(!f.eof()){
  f.read((char*) &s,sizeof(s));
  cout<<"Roll "<<s.roll<<" Name "<<s.name<<" Mark "<<s.marks<<endl;
  f.close();}
 }
  void getdata()
 {
  cout<<"enter roll no and name "<<endl;
  cin>>roll>>name;
  cout<<"marks"<<endl;
  cin>>marks;
 }
 
 public:void addrecord()
 {
  fstream f;
  student stu;
  f.open("student.dat",ios::app|ios::binary);
  stu.getdata();
  f.write((char*)&stu,sizeof(stu));
  f.close();
  
 }
 };
 
 

int main()
{
 student s;
 
 char ch='n';
 do
 {
  s.addrecord();
  s.display(); 
  cout<<"want add more????????(y/n)"<<endl;
  cin >> ch;
 }
 while(ch=='y'||ch=='Y');
 cout<<"updated!!!"<<endl;
 
 return 0;
}


























 

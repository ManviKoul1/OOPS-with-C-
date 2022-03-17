#include<iostream>
#include<fstream>
using namespace std;

class student
{
 int roll;
 char name[25];
 float marks;
 
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
  cout<<"want add more????????(y/n)"<<endl;
  ch=getchar();
 }
 while(ch=='y'||ch=='Y');
 cout<<"updated!!!"<<endl;
 return 0;
}

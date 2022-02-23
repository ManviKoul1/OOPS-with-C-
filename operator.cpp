#include<iostream>
using namespace std;

class Complex{
       int real,img;
       
       public:
       //default constructor
       Complex(){
       real=0;
       img=0;
       }
       
       Complex(int x,int y) //parameter const
       {
        real=x;
        img=y;
       }
       
       void display(){
       cout<<"The real part : "<<real<<"and img part: "<<img<<endl<<endl;
       }
       
       //overloading + operator
       Complex operator + (Complex obj){
       Complex temp;
       temp.real = real + ob.real;
       temp.img = img + ob.img;
       return temp;
       }
};
int main (){
    Complex c1(1,1),c2(5,5);
    c1.display();
    c2.display();
    Complex c3;
    c3=c1+c2;
    //c3 = c1.operator +(c2);
    c3.display();
    return 0;
}

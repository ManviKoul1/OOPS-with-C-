//Binary operator overloading


#include<iostream>
using namespace std;

class binary{
      private:
      int a,b,c;
      
      public:
      //readfunction
      void read (int x,int y,int z)                                     
      {
        a = x;
        b = y;
        c = z;
      }
      
      //display function 
      void display()
      {
        cout << "\n a= " << a <<"\n b= " << b << "\n c= "<< c;        
      }  
      
      //Defining operator function as memeber function 
      //Overloading "+" operator to add 2 objects
      //Member function
      binary operator + (binary b2)
      {
       binary b3;
       b3.a = a + b2.a;
       b3.b = b + b2.b;
       b3.c = c + b2.c;
       return b3;
      
      }
      
      binary operator - (binary b2)
      {
       binary b3;
       b3.a = a - b2.a;
       b3.b = b - b2.b;
       b3.c = c - b2.c;
       return b3;
      
      }
      
      binary operator * (binary b2)
      {
       binary b3;
       b3.a = a * b2.a;
       b3.b = b * b2.b;
       b3.c = c * b2.c;
       return b3;
      
      }
      
      friend  binary operator / (binary b1,binary b2)  //Friend function
      {
       binary b3;
       b3.a = b1.a / b2.a;
       b3.b = b1.b / b2.b;
       b3.c = b1.c / b2.c;
       return b3;
      
      }
};

     int main()
     {
      binary b1,b2,b3;    //Creating objects
      b1.read(1,2,3);
      b2.read(10,20,30);
      //Calling operator function ,overloading & control goes to that
      b3 = b1 + b2;
      b3.display();
      b3 = b1 - b2;
      b3.display();
      b3 = b1 * b2;
      b3.display();
      b3 = operator / (b1 , b2);
      b3.display();
      
      return 0;
     }












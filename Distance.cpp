// This program demonstrates the use of how to create a class Distance having data members feet and inch. Create
//parameterized constructor to initialize members feet and inch.

#include<iostream>
using namespace std;
class distance
{
   public:
   int feet,inch,x,y,z;
   void input()
   {
      cout<<“enter feet and inches:”<<“\n”;
      cin>>feet>>inch;
   }
   void show()
   {
      cout<<“The distance is “;
      cout<<feet<<” feet “<<inch<<” inch\n”;
   }
   void sum(dist x,dist y)
   {
      feet=x.feet+y.feet;
      inch=x.inch+y.inch;
      if(inch>=12)
      {
         feet=feet+1;
         inch=inch-12;
      }
   }
};
int main()
{
   distance x,y,z;
   x.input();
   y.input();
   z.sum(x,y);
   z.show();
}


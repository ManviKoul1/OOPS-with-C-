#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin("data.txt");
    char ch;
    int i,a=0,s=0,d=0;
   
    while(fin)
    {
     fin.get(ch);
     i=ch;
     if(ch==' ')
     s++;
     
    }
    cout<<"WHITESPACES:- "<<s;
   

    return 0;
}

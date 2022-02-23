//Demo code for Inline function

#include <iostream>

using namespace std;

inline int subtract(int x, int y) {                                //subtract two numbers
  return x - y;
}
inline int add(int a, int b) {                                     //add two numbers
  return a + b;
}

 
int main() {
  cout << add(1, 11) << endl;
  cout << subtract(100, 75) << endl;
  return 0;
}

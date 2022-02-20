//Create a class Rectangle having data members length and width.
//Demonstrate default, parameterized and copy constructor to initialize
//members.

#include <iostream>

using namespace std;

class Rectangle
{
		int length;
		int breadth;
		public:
			Rectangle( int l, int b )
			{
				length = l;
				breadth = b;
			}
			int getArea()
			{
				return length * breadth;
			}
};

int main()
{
	Rectangle rt( 7, 4 );
	cout << "Area : " << rt.getArea() << endl;
	return 0;
}




#include <iostream>

using namespace std;

class Rectangle
{
		int length;
		int breadth;
		public:
			Rectangle( int l, int b )
			{
				length = l;
				breadth = b;
			}
			int getArea()
			{
				return length * breadth;
			}
};

int main()
{
	Rectangle rt( 7, 4 );
	cout << "Area : " << rt.getArea() << endl;
	return 0;
}


#include <iostream>

using namespace std;

class Rectangle
{
		int length;
		int breadth;
		public:
			Rectangle( int l, int b )
			{
				length = l;
				breadth = b;
			}
			int getArea()
			{
				return length * breadth;
			}
};

int main()
{
	Rectangle rt( 7, 4 );
	cout << "Area : " << rt.getArea() << endl;
	return 0;
}

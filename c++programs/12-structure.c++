// Program 1
// C++ Program to demonstrate that
// Members of a class are private
//// by default


//using namespace std;
//
//class Test {
//	// x is private
//	int x;
//};
//
//int main()
//{
//	Test t;
//	//t.x = 20; // compiler error because x
//			// is private
//
//	return t.x;
//}



//// Program 2
//// C++ Program to demonstrate that
// members of a structure are public
// by default.
#include <iostream>
using namespace std;

struct Test {
	// x is public
	int x;
};

int main()
{
	Test t;
	t.x = 20;

	// works fine because x is public
	cout << t.x;
}

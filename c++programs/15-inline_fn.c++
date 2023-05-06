#include <iostream>
using namespace std;
//inline int cube(int s)
//{
//	return s*s*s;
//}
//int main()
//{
//	cout << "The cube of 3 is: " << cube(3) << "\n";
//	return 0;
//} //Output: The cube of 3 is: 27

class operation
{
	int a,b,add,sub;
	
public:
	inline void get()
    {
    cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;
    }
	void sum();
	void difference();
	
};
//inline void operation :: get()
//{
//	cout << "Enter first value:";
//	cin >> a;
//	cout << "Enter second value:";
//	cin >> b;
//}

inline void operation :: sum()
{
	add = a+b;
	cout << "Addition of two numbers: " << a+b << "\n";
}

inline void operation :: difference()
{
	sub = a-b;
	cout << "Difference of two numbers: " << a-b << "\n";
}



int main()
{
	cout << "Program using inline function\n";
	operation s;
	s.get();
	s.sum();
	s.difference();
	
	return 0;
}

#include <iostream>

using namespace std;

int m = 10;
int main()
{
      int m = 20;
      {
            int k = m;
            int m = 3;
            cout << "we are  in inner block" << endl;
            cout << "k=" << k << endl;
            cout << "m=" << m << endl;
            cout << "::m=" << ::m << endl;
      }
      cout << "we are in outer block" << endl;
      cout << "m=" << m << endl;
      cout << "::m=" << ::m << endl;
      return 0;
}

// int a=100;
//
// class A
//
//{
//
//       int a;
//
//       public:
//
// void fun()
//
//       {
//
//       a=20;
//
//       a+=::a;         //using global variable value
//
//       cout<<a;
//
// } };
//
// int main()
//
//{
//
//       A a1;
//
//       a1.fun();
//
//       return 0;
//
// }
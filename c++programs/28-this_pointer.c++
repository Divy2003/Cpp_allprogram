#include <iostream>
using namespace std;

class employee
{
private:
      int a, b, c;

public:
      int d, e;

      void setdata(int a, int b, int c,int d)
      {
         this-> a=a;       //this pointer is used when local variable's name is same as member's name
         this-> b=b;
         this-> c=c;
         this-> d=d;
      };
      void getdata()
      {
            cout << "the value of a is " << a << endl;
            cout << "the value of b is " << b << endl;
            cout << "the value of c is " << c << endl;
            cout << "the value of d is " << d << endl;
            cout << "the value of e is " << e << endl;
      }
};
int main()
{
      employee divy;
      divy.e = 85;
      divy.setdata(1, 2, 3,45);
      divy.getdata();
      return 0;
}
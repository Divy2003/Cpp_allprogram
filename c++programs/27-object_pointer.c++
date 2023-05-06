#include <iostream>
using namespace std;

class employee
{
private:
      int a, b, c;

public:
      int d, e;

      void setdata(int a1, int b1, int c1,int d1)
      {
          a=a1;
          b=b1;
          c=c1;
          d=d1;
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
      employee *d,divy;
     d=&divy;
     d->e=10;
     d->setdata(1,2,3,4);
     d->getdata();
     // divy.setdata(1, 2, 3,45);
      //divy.getdata();
      return 0;
}
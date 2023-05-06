
#include <iostream>
using namespace std;

int main()
{
 int a=100;
 int* ptr;
 int** pt;

ptr=&a;
pt=&ptr;
  

  cout<<"a="<<a<<endl;
  cout<<"&a="<<&a<<endl;
  cout<<"ptr="<<ptr<<endl;
  cout<<"&ptr="<<&ptr<<endl;
  cout<<"*ptr="<<*ptr<<endl;
  cout<<"pt="<<pt<<endl;
  cout<<"*pt="<<*pt<<endl;
  cout<<"**pt="<<**pt<<endl;
    return 0;
}

#include <iostream>
using namespace std;
class numbers
{
    int num1, num2;

public:
    void setdata(int a, int b){
    num1 = a;
    num2 = b;
}        
    friend int add(numbers N);              //declare friend fn                
};                                                    //must define frind fn out side class 
int add(numbers N)                     //friend fn define without using :: operator
{
    cout<<"add"<<N.num1 + N.num2;
    //return (N.num1 + N.num2);
}

int main()
{
    numbers n;
   // N1.setdata(10, 20);
  //  cout << "Sum = " << add(N1);
  n.setdata(10,20);
  add(n);
    return 0;
}
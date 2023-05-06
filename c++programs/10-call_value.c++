//call by value
#include <iostream>
using namespace std;
 
 
void add(int a){
  cout<<"a="<<a<<endl;
  a=10;
  cout<<"inside add"<<a<<endl;
}
                                              //in call by value the value will does not change in both function
int main()
{
    int a;
    cout<<"enter the value of A"<<endl;
    cin>>a;
    cout<<"A="<<a<<endl;
    add(a);
    cout<<"inside main"<<a;
 
    return 0;
}
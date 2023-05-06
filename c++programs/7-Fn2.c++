//with argument and return value 
#include<iostream>
using namespace std;

int max(int x, int y)
{   int c;
    c=x+y;
   return c;
}
int main()
{
    int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
     
    cout<<max(a, b);            //in return value fn we should cout<<fn 
 
   // cout << "c is " << c;
    return 0;
}
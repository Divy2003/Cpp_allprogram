//with argument and no return value 
#include<iostream>
using namespace std;

void max(int x, int y)
{   int c;
    c=x+y;
    cout<<c;
}
int main()
{
    int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
     
     max(a, b);
 
    //cout << "c is " << c;
    return 0;
}
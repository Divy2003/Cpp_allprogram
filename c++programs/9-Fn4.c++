//without argument and with return value 
#include<iostream>
using namespace std;

int max()
{   int a,b,c;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;

    c=a+b;
   
    return c;
}
int main()
{
    
    cout<<max();
 
    //cout << "c is " << c;
    return 0;
}
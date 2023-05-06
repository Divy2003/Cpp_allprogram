#include<iostream>
using namespace std;

void sum(int a)
{   int sum;
    sum=a;  
    cout<<sum<<endl;
}
void sum(int a,int b)
{   int sum;
    sum=a+b; 
    cout<<sum<<endl; 
}
void sum(int a,int b,int c)
{   int sum;
    sum=a+b+c;
    cout<<sum<<endl;  
}
void sum(double a,double b)
{   double sum;
    sum=a+b;
    cout<<sum;  
}
int main(){
         sum(10,20);
         sum(10);
         sum(10,20,30);
         sum(10.5,10.6);

    return 0;
}
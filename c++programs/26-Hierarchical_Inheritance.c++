#include<iostream>
using namespace std;

class A{
    public:
    int a,b,c;
    void add(int a,int b){
        cout<<"c="<<a+b;
    }
};
class B:public A{
    public:
    int a,b,c;
    void sub(int a,int b){
        cout<<"c="<<a-b;
    }
};
class C:public A{
    public:
    int a,b,c;
    void mul(int a,int b){
        cout<<"c="<<a*b;}
};
int main(){
    A obj1;
    B obj2;
    C obj3;
    obj2.sub(3,2);
    obj3.mul(3,2);
    return 0;
}
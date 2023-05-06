#include<iostream>
using namespace std;

class A{
    public:
    int a,b,c;
    void add(int a,int b){
        cout<<"c="<<a+b;
    }
};
class B:virtual public A{
    public:
    int a,b,c;
    void sub(int a,int b){
        cout<<"c="<<a-b;
    }
};
class C:virtual public A{
    public:
    int a,b,c;
    void mul(int a,int b){
        cout<<"c="<<a*b;}
};
class D:public B,public C{
    public:
    int a,b,c;
    void div(int a,int b){
        cout<<"c="<<a/b;}
};
int main(){
    A obj1;
    B obj2;
    C obj3;
    D obj4;
    obj4.add(3,2);
    obj4.sub(3,2);
    obj4.mul(3,3);
    obj4.div(6,3);
     obj2.add(3,2);
    obj2.sub(3,2);
    return 0;
}
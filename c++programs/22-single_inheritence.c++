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
int main(){
    A obj1;
    B obj2;
    obj2.add(3,2);
    obj2.sub(3,2);
    return 0;
}
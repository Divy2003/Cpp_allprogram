#include <iostream>
using namespace std;

class item
{
int number;
static int count;// static variable declaration
public:
void getdata(int a){
number = a;
count++;
}
static void getcount(){
cout<<"value of count: "<<count<<endl;           //staic memb fn
}
};
int item :: count; // static variable definition
int main()
{
item a,b,c;
a.getdata(100);
item::getcount();            //we can call only 'static memb function' withiut using object 
b.getdata(200);
//item::getcount();
b.getcount(); 
c.getdata(300);
item::getcount();
return 0;
}
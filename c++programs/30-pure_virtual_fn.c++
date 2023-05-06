#include <iostream>
using namespace std;
class demo {               //which class have pure virtual fn that is known abstract class which not able to make object 
public:
virtual void display() = 0;     //this is pure virtual fn or do nothing fn
};
class derived : public demo {
public:
void display()
{
cout << "this is demonstration of pure virtual function" << endl;
}
};
int main(){
derived d;                               
d.display();                            
}                                        
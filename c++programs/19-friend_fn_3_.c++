// friend fn with function overloading
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setdeta(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "a=" << a<< endl;
        cout<< "b=" << b;
    }
    friend complex operator+(complex c1, complex c2);
};
complex operator+(complex c1, complex c2)
{
    complex tmp;
    tmp.a = c1.a + c1.b;
    tmp.b = c2.a + c2.b;
    return tmp;
}
int main()
{
    complex c1,c2,c3;
    c1.setdeta(5,6);
    c2.setdeta(7,8);
    c3 = c1 + c2;
    c3 = operator+(c1, c2);
    //c1.showdata();
    //c2.showdata();
    c3.showdata();
}
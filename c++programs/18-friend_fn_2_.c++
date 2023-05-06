// using two class
#include <iostream>
using namespace std;
class Square; // forward declaration
class Rectangle
{
    int width , height ;

public:
    void setdata(int w,int h){
        width=w;
        height=h;
    }
    friend void display(Rectangle, Square);
};

class Square
{
    int side;

public:
void setdata(int s){
        side=s;
    }
    friend void display(Rectangle p, Square s);
};

void display(Rectangle p, Square s)
{
    cout << "Rectangle:" << p.width * p.height;
    cout << "Square:" << s.side * s.side;
}

int main()
{
    Rectangle l;
    Square s;
    l.setdata(5,5);
    s.setdata(5);
    display(l, s);
    return 0;
}

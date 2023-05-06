#include <iostream>
using namespace std;

class rectangle
{
    int length, width;

public:
    rectangle()
    { // Default constructor
        length = 0;
        width = 0;
         cout<<length<<endl;
    }
    rectangle(int x, int y)
    { // Parameterized constructor

        length = x;
        width = y;
        cout<<length<<endl;
    }
    rectangle(rectangle &_r)
    { // Copy constructor
        length = _r.length; //heare left side length = null(is from 'r3'object) 
        width = _r.width;    //and right side --> '_r.length' is from 'r2' object  
         cout<<length<<endl;
           cout<<width;
    }
};
int main()
{
    rectangle r1;         // Invokes default constructor
    rectangle r2(10, 20); // Invokes parameterized constructor
    rectangle r3(r2);     // Invokes copy constructor
}
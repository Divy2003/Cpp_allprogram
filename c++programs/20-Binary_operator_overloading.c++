#include <iostream>
using namespace std;

class complex
{
    int real, imag;

public:
    complex()
    {
        //real = 0;
        //imag = 0;
    }                                /*binery operator ke andar two operands ki jarurat hoti hai
                                    heare c1 and c2 aer used*/
    complex(int x, int y)
    {
        real = x;
        imag = y;
    }
    void disp()
    {
        cout << "\nreal value=" << real << endl;
        cout << "imag value=" << imag << endl;
    }
    complex operator+(complex c)
    {                                   /*heare c=c2 temp=c3 */
        complex tmp;
        tmp.real = real + c.real;
        tmp.imag = imag + c.imag;
        return tmp;
    }
};
int main()
{
    complex c1(4, 6), c2(7, 9),c3;
   // complex c3;
    c3 = c1 + c2; // Similar to function call c3=c1.operator +(c2);
    c1.disp();
    c2.disp();
    c3.disp();
    return 0;
}
#include <iostream>
using namespace std;           //unare operator ke andar only one hi operande hota hai
/*class space
{
    int x, y, z;

public:
    space()
    {
        x = y = z = 0;
    }
    space(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << "\nx=" << x << ",y=" << y << ",z=" << z;
    }
    void operator-(){
         x = -x;
         y = -y;
         z = -z;
    }
};
int main()
{
    space s1(5, 4, 3);
    s1.display();
    -s1;                //similar to  s1.operator-()
    s1.display();
    return 0;           //if we assign value of -s1 in other object 's2' then we need to complex type
}*/
class complex
{
    int x, y, z;

public:
   // complex()
   // {
   //     x = y = z =0;
   // }
    int comp(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << "\nx=" << x << ",y=" << y << ",z=" << z;
    }
    complex operator-(){         //hear onlo one operand so dont need parameterr
        complex tm;                          /*heare we create tm object and return tm of complex type 
                                                  because we want complex value of s1  assigne into s2 */
         tm.x = -x;
         tm.y = -y;               //heare tm=s2
         tm.z = -z;
         return(tm);
    }
};

int main()
{
    complex s1,s2;
    s1.comp(5, 4, 3);
    s2=-s1;               //similar to  s1.operator-()
    s2.display();
    //-s1;                   
    //s1.display();
    return 0;           //if we assign value of -s1 in other object 's2' then we need to complex type
}
//
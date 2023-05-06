#include <iostream>
using namespace std;
class Test
{
private:
    int mark=10;
    float spi=5;

public:
    //void Set()
    //{
    //    mark;
    //    spi =5;
    //}
    void sum()
    {
        cout << "sum= " << mark+spi<< endl;
       // cout << "spi= " << spi;
    }
};
int main()
{
    Test o1, o2;
   // o1.Set();
    o1.sum();

    return 0;
}
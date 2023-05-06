#include <iostream>
using namespace std;
class nest
{
      int a;
      int square_num()
      {
            return a * a;
      }
public:
      // int square_num()
      //{
      //      return a * a;
      //}
      void input_num()
      {
            cout << "\nEnter a number ";
            cin >> a;
      }
      int cube_num()
      {
            return a * a * a;
      }
      void disp_num()
      {
            int sq = square_num(); // nesting of member function
            int cu = cube_num(); // nesting of member function
            cout << "\nThe square of " << a << "is" << sq;
            cout << "\nThe cube of " << a << "is" << cu;
      }
};
int main()
{
      nest n1;
      n1.input_num();
      n1.disp_num();
      return 0;
}

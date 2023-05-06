#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, s;
    cout << "Enter Number of Elements in Array:\n";
    cin >> n;
    cout << "Enter numbers:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter a number to search in Array:\n";
    cin >> s;
    for (i = 0; i < n; i++)
    {

        if (s == a[i])
        {
            cout << "Number found at index: " << i;
            break;
        }
    }
    if (i == n)
        cout << "Number not found\n";
    return 0;
}
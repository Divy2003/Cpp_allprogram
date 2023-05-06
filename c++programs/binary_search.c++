#include <iostream>
using namespace std;
int main()
{
    int i, first, last, middle, n, s, a[100];
    cout << ("Enter number of elements:\n");
    cin >> n;
    cout << ("Enter elements in ascending order:\n");

    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << ("Enter an element to search:\n");
    cin >> s;

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (s == a[middle])
        {
            cout << "Element is found at index:" << middle;
            break;
        }
        else if (s > a[middle])
            first = middle + 1;
        else if (s < a[middle])
            last = middle - 1;

        middle = (first + last) / 2;
    }
    if (first > last)
        cout << ("Element is not found");
    return 0;
}
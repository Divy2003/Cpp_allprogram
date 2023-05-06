#include <iostream>
using namespace std;
void quicksort(int a[25], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (a[i] < a[pivot] && i <= last)
                i++;
            while (a[j] > a[pivot])
                j--;
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        quicksort(a, first, j - 1);
        quicksort(a, j + 1, last);
    }
}
int main() 
{
    int i, n, a[25];
    cout << "Enter total a of elements:\n ";
    cin >> n;
    cout << "Enter elements:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    quicksort(a, 0, n - 1);
    cout << "The Sorted elements are:\n ";
    for (i = 0; i < n; i++)
        cout << a[i];
    return 0;
}
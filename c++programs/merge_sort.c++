#include <iostream>
using namespace std;
int n, a[30], i, j, k, temp[30];
void merge(int low, int mid, int high)
{
    i = low;
    j = mid + 1;
    k = low;
    while ((i <= mid) && (j <= high))
    {
        if (a[i] >= a[j])
            temp[k++] = a[j++];
        else
            temp[k++] = a[i++];
    }
    while (i <= mid)
        temp[k++] = a[i++];
    while (j <= high)
        temp[k++] = a[j++];
    for (i = low; i <= high; i++)
        a[i] = temp[i];
}
void mergesort(int low, int high)
{
    int mid;
    if (low != high)
    {
        mid = ((low + high) / 2);
        mergesort(low, mid);
        mergesort(mid + 1, high);
        merge(low, mid, high);
    }
}
int main()
{
    cout << ("Enter total elements:\n");
    cin >> n;
    cout << ("Enter elements:\n");

    for (i = 0; i < n; i++)
        cin >> a[i];
    mergesort(0, n - 1);
    cout << ("After sorting is:\n");
    for (i = 0; i < n; i++)
        cout << (a[i]);
    return 0;
}
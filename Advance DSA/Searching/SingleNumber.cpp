// Find Signe No in Array where all number is twice

#include <iostream>
using namespace std;

int singleNum(int a[], int n)
{
    if (n == 1)
        return a[0];
    if (a[0] != a[1])
        return a[0];
    if (a[n - 1] != a[n - 2])
        return a[n - 1];
    int s = 1, e = n - 2;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] != a[mid - 1] && a[mid] != a[mid + 1])
        {
            return a[mid];
        }
        if (a[mid] == a[mid - 1])
        {
            mid = mid - 1;
        }
        if (mid % 2 == 0)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
}

int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;
    int A[n];
    cout << "Enter Element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int ans = singleNum(A, n);
    cout << ans << endl;
    return 0;
}
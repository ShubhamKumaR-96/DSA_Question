// Find Max element in array using recursion

#include <iostream>
#include <climits>
using namespace std;

void findMax(int a[], int n, int idx, int maxNo)
{
    if (idx == n)
    {
        cout << maxNo << endl;
        return;
    }
    if (a[idx] > maxNo)
        maxNo = a[idx];
    findMax(a, n, idx + 1, maxNo);
}

// 2nd way
int maxNum(int a[], int n, int idx)
{
    if (idx == n)
        return INT_MIN;
    return max(a[idx], maxNum(a, n, idx + 1));
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter arr elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Max no : " << maxNum(arr, n, 0);
}
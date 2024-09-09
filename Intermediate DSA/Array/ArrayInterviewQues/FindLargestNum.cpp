#include <iostream>
using namespace std;

int largestNo(int a[], int n)
{
    int maxNo = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxNo)
        {
            maxNo = a[i];
        }
    }
    return maxNo;
}

int main()
{
    int n;
    cout << "Enter the length of array : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The largest no of arr is : " << largestNo(arr, n) << endl;

    return 0;
}
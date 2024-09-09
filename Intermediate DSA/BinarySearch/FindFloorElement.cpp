// Given an array sorted in ASC order. Find the floor of given no K.
// Note => Floor(K) => The greatest or equal to K
// arr =[-5 2 3 6 9 10 11 16 18]

#include <iostream>
#include <climits>
using namespace std;

int findFloor(int a[], int n, int k)
{
    int s = 0, e = n - 1;
    int ans = INT_MIN;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] <= k)
        {
            ans = a[mid];
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{

    int n;
    cout << "Enter the Size : ";
    cin >> n;
    int arr[n];
    int num;
    cout << "Enter elements : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the value of K : ";
    cin >> k;
    cout << "Floor of " << k << " is : " << findFloor(arr, n, k) << endl;

    return 0;
}
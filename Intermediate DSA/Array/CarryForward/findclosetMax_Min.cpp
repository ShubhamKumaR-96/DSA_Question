// Given an arraay size n you need to find closest length of subarray of min and max value of subarray
// arr=13     2 2 6  6 5 1 5 2 6 4 1 3 4

#include <iostream>
#include <limits.h>
using namespace std;

int closestMaxMinLengthSubArr(int a[], int n)
{
    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        minValue = min(a[i], minValue);
        maxValue = max(a[i], maxValue);
    }
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == minValue)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == maxValue)
                {
                    ans = min(ans, j - i + 1);
                    break;
                }
            }
        }

        if (a[i] == maxValue)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == minValue)
                {
                    ans = min(ans, j - i + 1);
                    break;;
                }
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size N : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Closet Min and Max Subarray : " << closestMaxMinLengthSubArr(arr, n) << endl;

    return 0;
}
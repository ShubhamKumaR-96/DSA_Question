// Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:

// Input: nums = [2,2,3,2]
// Output: 3
// Example 2:
// Input: nums = [0,1,0,1,0,1,99]
// O/p = 99

#include <iostream>
using namespace std;

bool checkBit(int n, int i)
{
    return (n & (1 << i));
}

int setIthBit(int n, int i)
{
    return (n | (1 << i));
}

int uniqueNo(int a[], int n)
{
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (checkBit(a[j], i))
            {
                count++;
            }
        }
        if (count % 3 != 0)
        {
            ans = setIthBit(ans, i);
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    int arr[n];
    cout << "Enter Element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Unique No : " << uniqueNo(arr, n) << endl;

    return 0;
}
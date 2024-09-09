// Given an array where all numbers appear thrice except one number which appear only once
// find the single numbers (O(1)sc)  A: {5 7 5 7 11 11 9 11 7 5}

#include <iostream>
using namespace std;

// Check if the ith bit of n is set
bool checkBit(int n, int i)
{
    return (n & (1 << i)) != 0;
}

// Set the ith bit of n and return the new value
int setIthBit(int n, int i)
{
    return (n | (1 << i));
}

int singleUniqueNo(int a[], int n)
{
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (checkBit(a[j], i))
            {
                cnt++;
            }
        }
        if (cnt % 3 != 0)
        {
          ans=setIthBit(ans, i);
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " Unique No : " << singleUniqueNo(arr, n) << endl;
    return 0;
}
// Max consecutive 1's
// Given a binary array, we can atmost replace a single 0 with 1. find max consecutive 1's we can get
// arr 1 1 1 0 1 1 0 1 1 1 0 1

#include <iostream>
using namespace std;

int maxConsecutive1s(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            int l = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                if (arr[j] == 1)
                {
                    l++;
                }
                else
                {
                    break;
                }
            }
            int r = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] == 1)
                {
                    r++;
                }
                else
                {
                    break;
                }
            }
            if (cnt > l + r)
            {
                ans = max(ans, l + r + 1);
            }
            else
            {
                ans = max(ans, l + r);
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
    cout << "max consecutive 1's : " << maxConsecutive1s(arr, n) << endl;
    return 0;
}
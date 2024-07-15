// find the max subarray sum of lenth = K
// arr = 3 4 2 -1 6 7 8 9 3 2 -1 4

#include <iostream>
#include <limits.h>
using namespace std;

int maxSubArrSum(int arr[], int n, int k)
{
    int maxSum = 0;
    for (int i = 0; i <= n - k; i++)
    {
        int start = i, end = i + k - 1;
        int sum = 0;
        for (int j = start; j <= end; j++)
        {
            sum += arr[j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
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
    int k;
    cout << "Enter the value of K : ";
    cin >> k;
    cout << "Maximum subArray sum : " << maxSubArrSum(arr, n, k);
    return 0;
}
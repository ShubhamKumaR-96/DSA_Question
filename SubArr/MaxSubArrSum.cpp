#include <iostream>
using namespace std;
#include <climits>

void maxSubArrSum(int *arr, int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int arrSum = 0;
        for (int j = i; j < n; j++)
        {
            arrSum += arr[j];
        }
        maxSum = max(arrSum, maxSum);
    }
    cout << "Maximum subarray sum is: " << maxSum << endl;
}

// Kadane Algo
void maxSubarrSums(int *arr, int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Maximum subarray sum is: " << maxSum << endl;
}

int main()
{
    int n;
    cout << "Enter the length of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the arr element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maxSubarrSums(arr, n);
    return 0;
}
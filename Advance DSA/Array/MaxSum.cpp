// Given an array of size N. find & return the maxSum of any subarray
// arr = -2 3 4 -1 5 -10 7   ASked in  => Google direct-i

#include <iostream>
using namespace std;

// using Kadane's algo

// int maxSubArrSum(int a[], int n)
// {
//     int maxSum = a[0], currSum = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (currSum < 0)
//         {
//             currSum = 0;
//         }
//         currSum = (currSum + a[i]);
//         maxSum = max(maxSum, currSum);
//     }
//     return maxSum;
// }


// printing starting and ending index
int maxSubArrSum(int a[], int n)
{
    int maxSum = a[0], currSum = a[0];
    int startIdx = 0, endIdx = 0, tempStart = 0;
    for (int i = 1; i < n; i++)
    {
        if (currSum < 0)
        {
            currSum = 0;
            tempStart = i;
        }
        currSum += a[i];
        if (currSum > maxSum)
        {
            maxSum = currSum;
            startIdx = tempStart;
            endIdx = i;
        }
    }
    cout << "Start Index: " << startIdx << ", End Index: " << endIdx << endl;
    return maxSum;
}
int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    int arr[n];
    cout << "Enter element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Max SubArr sum : " << maxSubArrSum(arr, n);
}
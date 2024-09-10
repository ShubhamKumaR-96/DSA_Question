// Q3. Time to equalitySolved
// Problem Description
// Given an integer array A of size N. In one second, you can increase the value of one element by 1.

// Find the minimum time in seconds to make all elements of the array equal.

// Problem Constraints
// 1 <= N <= 1000000
// 1 <= A[i] <= 1000

// Input Format
// First argument is an integer array A.

// Output Format
// Return an integer denoting the minimum time to make all elements equal.

// Example Input
// A = [2, 4, 1, 3, 2]

// Example Output
// 8

// Example Explanation
// We can change the array A = [4, 4, 4, 4, 4]. The time required will be 8 seconds.

#include <iostream>
#include <climits>
using namespace std;

int timeToEquality(int a[], int n)
{
    int time = 0;
    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxNo)
        {
            maxNo = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        time += (maxNo - a[i]);
    }
    return time;
}

int main()
{
    int n;
    cout << "Enter N :";
    cin >> n;
    int arr[n];
    cout << "Enter element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Total time required to equal : " << timeToEquality(arr, n);
    return 0;
}
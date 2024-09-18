// find maximum absoulte difference Given an integer array. find the max value of f(i,j)=|A[i]-A[j]+|-j|

#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

int maxAbsoulteDiff(int A[], int n)
{
    int max1 = INT_MIN, min1 = INT_MAX;
    int max2 = INT_MIN, min2 = INT_MAX;

    // Traverse the array and update max and min for both cases
    for (int i = 0; i < n; i++)
    {
        //  case 1 => A[i]+i
        max1 = max(max1, A[i] + 1);
        min1 = min(min1, A[i] + 1);

        // Cae 2 : A[i]-i
        max2 = max(max2, A[i] - i);
        min2 = min(min2, A[i] - i);
    }
    // diff b/w max of two cases
    int result = max(max1 - min1, max2 - min2);
    return result;
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
    cout << "Max Absoulte diff : " << maxAbsoulteDiff(arr, n) << endl;
    return 0;
}
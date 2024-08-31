// 540. Single Element in a Sorted Array
// You are given a sorted array consisting of only integers where every element appears exactly twice,
//  except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.
// Example 1:

// Input: nums = [1,1,2,3,3,4,4,8,8]
// Output: 2
// Example 2:

// Input: nums = [3,3,7,7,10,11,11]
// Output: 10

#include <iostream>
using namespace std;

int uniQueEle(int arr[], int n)
{

    //  Edge case: If array has only one element, it's trivially a local minima
    if (n == 1)
        return arr[0];
    if (arr[0] != arr[1])
        return arr[0];
    if (arr[n - 1] != arr[n - 2])
        return arr[n - 1];
    int start = 1, end = n;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // finding target value
        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
        {
            return arr[mid];
        }
        if (arr[mid - 1] == arr[mid])
        {
            mid = mid - 1;
        }
        // first occurance of staring point evn
        if (mid % 2 == 0)
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Unique Element : " <<uniQueEle(arr,n)<<endl;
}
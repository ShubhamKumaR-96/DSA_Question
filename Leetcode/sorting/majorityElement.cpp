// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

#include <iostream>
#include <algorithm>
using namespace std;

int majorityEle(int arr[], int n)
{
    sort(arr , arr+n);
    return arr[n/2];
}

int main()
{
    int n;
    cout << "Enter arr size ";
    cin >> n;
    int A[n];
    cout << "Enter elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout<<"Majority Elements : " <<majorityEle(A,n)<<endl;
}
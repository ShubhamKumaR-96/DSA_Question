// Given an array of positive integers A, check and return whether the array elements are consecutive or not.
// NOTE: Try this with O(1) extra space.

// Problem Constraints
// 1 <= length of the array <= 100000
// 1 <= A[i] <= 10^9

// Input Format
// The only argument given is the integer array A.

// Output Format
// Return 1 if the array elements are consecutive else return 0.

// Example Input
// Input 1:

//  A = [3, 2, 1, 4, 5]
// Input 2:

//  A = [1, 3, 2, 5]

// Example Output
// Output 1:

//  1
// Output 2:

//  0

// Example Explanation
// Explanation 1:

//  As you can see all the elements are consecutive, so we return 1.
// Explanation 2:

//  Element 4 is missing, so we return 0.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute force way T.C => O(nlogn)

int areConsective(vector<int> &v)
{
    int n = v.size();
    if (n == 1) return 1;
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] != 1)
        {
            return 0;
        }
    }
    return 1;
}

// Optimized way with T.C => O(n)

int areConsecutive(vector<int> &v)
{
    int n = v.size();
    int maxVal = *max_element(v.begin(), v.end());
    int minVal = *min_element(v.begin(), v.end());

    if (maxVal - minVal != n - 1)
    {
        return 0;
    }
    // mark visite
    for (int i = 0; i < n; i++)
    {
        int idx = abs(v[i]) - minVal;
        if (v[idx] < 0)
        {
            return 0;
        }
        v[idx] = -v[idx]; // marked
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;
    vector<int> v;
    cout << "Enter Element : ";
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    if (areConsective(v))
    {
        cout << "Consecutive" << endl;
    }
    else
    {
        cout << "Not consecutive" << endl;
    }
}
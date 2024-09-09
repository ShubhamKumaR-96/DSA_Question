// 1814. Count Nice Pairs in an Array
// You are given an array nums that consists of non-negative integers. Let us define rev(x) as the reverse of the non-negative integer x. For example, rev(123) = 321, and rev(120) = 21. A pair of indices (i, j) is nice if it satisfies all of the following conditions:

// 0 <= i < j < nums.length
// nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])
// Return the number of nice pairs of indices. Since that number can be too large, return it modulo 109 + 7.
// Example 1:

// Input: nums = [42,11,1,97]
// Output: 2
// Explanation: The two pairs are:
//  - (0,3) : 42 + rev(97) = 42 + 79 = 121, 97 + rev(42) = 97 + 24 = 121.
//  - (1,2) : 11 + rev(1) = 11 + 1 = 12, 1 + rev(11) = 1 + 11 = 12.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int rev(int n)
{
    int r = 0;
    while (n > 0)
    {
        r *= 10;
        r += (n % 10);
        n /= 10;
    }
    return r;
}
int countNicePairs(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        nums[i] -= rev(nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (m.find(nums[i]) != m.end())
        {
            cnt = cnt % 1000000007;
            cnt += m[nums[i]];
            m[nums[i]]++;
        }
        else
            m[nums[i]]++;
    }
    return cnt % 1000000007;
}
int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    int val;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
    }
    int result = countNicePairs(v);

    cout << result << endl;
}

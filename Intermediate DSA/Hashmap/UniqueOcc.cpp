// 1207. Unique Number of Occurrences  =>Given an array of integers arr,
// return true if the number of occurrences of each value in the array is unique or false otherwise.

// Example 1:

// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

#include <iostream>
#include <unordered_set>
#include <vector>
#include <unordered_map>
using namespace std;

bool uniqueOcc(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++; // adding the freq
    }
    unordered_set<int> s;
    for (auto x : m)
    {
        int freq = x.second;
        if (s.find(freq) != s.end())
            return false;
        else
            s.insert(freq);
    }
    return true;
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
    if (uniqueOcc(v))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }
    return 0;
}
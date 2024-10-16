// Q => Minimize the cost of Array
// Q => Given an array of N integers, minimize the cost to empty given array where cost of removing an element
// is equal to the sum of all elements left in array   A= 2 1 4

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calCulate_Cost(vector<int> &V, int n)
{
    reverse(V.begin(), V.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += i * V[i];
    }
    return ans;
}

int main()
{

    int n;
    cout << "Enter N : ";
    cin >> n;
    vector<int> v;
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    cout << "Minimum Cost : " << calCulate_Cost(v,n) << endl;

    return 0;
}
// 2442. Count Number of Distinct Integers After Reverse Operations
// Input: nums = [1,13,10,12,31]

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int reverse(int n)
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

int distinctCount(vector<int> &v, int n)
{

    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        int res = reverse(v[i]);
        s.insert(v[i]);
        s.insert(res);
    }
    return s.size();
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    cout << "total distinct ele : " << distinctCount(v, n) << endl;
    return 0;
}
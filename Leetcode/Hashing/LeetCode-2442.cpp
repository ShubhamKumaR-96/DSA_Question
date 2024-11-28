// 2442. Count Number of Distinct Integers After Reverse Operations

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

int uniqueNo(vector<int> &arr, int n)
{
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        int rev = reverse(arr[i]);
        s.insert(arr[i]);
        s.insert(rev);
    }
    return s.size();
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector<int> v;
    cout << "Enter elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    cout << "Total Distinct elements : " << uniqueNo(v, n) << endl;
    return 0;
}
// 2744. Find Maximum Number of String Pairs
// Input: words = ["cd","ac","dc","ca","zz"]
// Output: 2

#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int maxNoOfStringPairs(vector<string> &words)
{
    int n = words.size();
    int count = 0;
    unordered_set<string> s;

    for (int i = 0; i < n; i++)
    {
        string res = words[i];
        reverse(res.begin(), res.end());
        if (s.find(res) != s.end())
        {
            count++;
        }
        else
        {
            s.insert(words[i]);
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string val;
        cin >> val;
        v.push_back(val);
    }
    cout << "Total Pairs : " << maxNoOfStringPairs(v) << endl;
    return 0;
}
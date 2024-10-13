#include <iostream>
#include <vector>
using namespace std;

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

    return 0;
}
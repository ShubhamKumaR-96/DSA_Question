// You are given sorted distinct elements The array elements represents length / Breath of
// a rectangle. Count of rectangle whose sum < B  Arr = 2 3 4 7 8 9 12 14 15 16 19 20
// IMP NOTE => we need to asked here shall we also count breath * length  Then we need to add count += (p2-p1+1)*2-1;

#include <iostream>
#include <vector>
using namespace std;

int countRectangleArea(vector<int> &v, int n, int b)
{
    int p1 = 0, p2 = n - 1, count = 0;
    while (p1 <= p2)
    {
        if (v[p1] * v[p2] < b)
        {
            count += p2 - p1 + 1;
            ;
            p1++;
        }
        else
        {
            p2--;
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter N :";
    cin >> n;
    vector<int> v;
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    int B;
    cout << "Value of B : ";
    cin >> B;

    cout << "Total Count : " << countRectangleArea(v, n, B);
}
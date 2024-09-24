
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            res[k++] = a[i++];
        }
        else
        {
            res[k++] = b[j++];
        }
    }
    if (i == a.size()) // when a is ended
    {
        while (j < b.size())
        {
            res[k++] = b[j++];
        }
    }
    if (j == b.size()) // when b is ended
    {
        while (i < a.size())
        {
            res[k++] = a[i++];
        }
    }
}

int main()
{
    int a[] = {1, 4, 5, 80};
    int n1 = sizeof(a) / sizeof(a[0]);
    int b[] = {2, 3, 6, 7, 10, 12};
    int n2 = sizeof(b) / sizeof(b[0]);
    vector<int> arr(a, a + n1);
    vector<int> brr(b, b + n2);
    vector<int> res(n1 + n2);
    merge(arr, brr, res);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}

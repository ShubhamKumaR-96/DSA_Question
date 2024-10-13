// Given an array of N elements. You need to re-arrange the arr[0] should go its sorted
//  position. All the elements which are smaller than arr[0] => left side and arr[0] large no it's right side
//  10 3 8 15 6 12 2 18 7 1

#include <iostream>
#include <vector>
using namespace std;

// vector<int> leftMinRightMax(vector<int> &A)
// {
//     int n = A.size();
//     vector<int> temp(n);
//     int i = 1, p1 = 0, p2 = n - 1;
//     while (i < n)
//     {
//         if (A[i] > A[0])
//         {
//             temp[p2] = A[i];
//             p2--;
//         }
//         else
//         {
//             temp[p1] = A[i];
//             p1++;
//         }
//         i++;
//     }
//     temp[p1] = A[0];
//     return temp;
// }
// How we can reduce space complexity

vector<int> leftMinRightMax(vector<int> &A)
{
    int n = A.size();
    int p1 = 1, p2 = n - 1;
    while (p1 <= p2)
    {
        if (A[p1] <= A[0])
        {
            p1++;
        }
        else if (A[p2] >= A[0])
        {
            p2--;
        }
        else
        {
            swap(A[p1], A[p2]);
            p1++, p2--;
        }
    }
    swap(A[0], A[p1 - 1]);
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
    leftMinRightMax(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
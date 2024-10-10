// Given 3 sorted Array A = 3 14 16 20 29 40 55 B= -6 23 24 30 35 50 C= -15 15 26 29 31 39 42
// Min (max(A[i],B[j],c[j])-min(A[i],B[j],c[j]));

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int minTripletAns(vector<int> &A, vector<int> &B, vector<int> &C)
{
    int l = A.size(), m = B.size(), n = C.size();
    int p1 = 0, p2 = 0, p3 = 0, ans = INT_MAX;
    int minVal = INT_MAX;
    while (p1 < l && p2 < m && p3 < n)
    {
        int MaxVal = max(A[p1], max(B[p2], C[p3]));
        int MinVal = min(A[p1], min(B[p2], C[p3]));
        int diff = MaxVal - MinVal;
        ans = min(ans, diff);
        if (A[p1] == MinVal)
        {
            p1++;
        }
        else if (B[p2] == MinVal)
        {
            p2++;
        }
        else
        {
            p3++;
        }
    }
    return ans;
}

int main()
{
    vector<int> A = {3, 14, 16, 20, 29, 40, 55};
    vector<int> B = {-6, 23, 24, 30, 35, 50};
    vector<int> C = {-15, 15, 26, 29, 31, 39, 42};
    cout << "Minimum Difference: " << minTripletAns(A, B, C);
    return 0;
}
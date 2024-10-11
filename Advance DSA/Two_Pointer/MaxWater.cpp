// Given N array elements (Heights of walls). Pick any 2 walls calculate the max water. 
// Accumlate b/w any 2 waters arr= 3 5 4 7 3 6 5 4 1 2  
// Note => Water accumalted = min(two walls)* width

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &A)
{
    int maxArea = 0, p1 = 0, p2 = A.size() - 1;
    while (p1 < p2)
    {
        maxArea = max(maxArea, min(A[p1], A[p2]) * (p2 - p1));
        if (A[p2] > A[p1])
        {
            p1++;
        }
        else
        {
            p2--;
        }
    }

    return maxArea;
}

int main()
{
    vector<int> A1 = {3, 5, 4, 7, 3, 6, 5, 4, 1, 2 };
    cout << "Maximum Area : " << maxArea(A1) << endl;

    return 0;
}

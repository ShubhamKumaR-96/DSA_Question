// Given sorted array distinct elements count all pairs (i,j) such that a[i]+a[j]=k  and i!=j . 

#include <iostream>
#include <vector>

using namespace std;

int countPairsOptimized(vector<int> &arr, int k)
{
    int p1 = 0, p2 = arr.size() - 1;
    int cnt = 0;
    while (p1 < p2)
    {
        int sum = arr[p1] + arr[p2];
        if (sum == k)
        {
            if (arr[p1] != arr[p2])
            {
                int cnt1 = 0, cnt2 = 0;
                int x1 = arr[p1];
                while (arr[p1] == x1)
                {
                    p1++;
                    cnt1++;
                }
                int x2 = arr[p2];
                while (arr[p2] == x2)
                {
                    cnt2++;
                    p2--;
                }
                cnt += (cnt1 * cnt2);
            }
            else
            {
                int cntSum = p2 - p1 + 1;
                cnt += (cntSum * (cntSum - 1) / 2);
                break;
            }
        }
        else if (sum < k)
        {
            p1++;
        }
        else
        {
            p2--;
        }
    }
    return cnt;
}
int main()
{
    vector<int> arr = {1, 4, 4, 5,5, 5, 5, 6, 6,6, 7, 11};
    int k = 10;

    int result = countPairsOptimized(arr, k);
    cout << "Number of pairs with sum " << k << ": " << result << endl;

    return 0;
}

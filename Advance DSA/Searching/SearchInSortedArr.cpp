// 4 5 6 7 0 1 2 3  B=4
//   A = [5, 17, 100, 3] B = 6   

#include <iostream>
using namespace std;

int findBIdx(int A[], int n, int B)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (A[mid] == B)
        {
            return mid;
        }
        // check if left is sorted
        if (A[mid] >= A[0])
        {
            if (A[0] <= B && B < A[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (A[mid] > B && B <= A[0])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;
    int A[n];
    cout << "Enter Element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int B;
    cout << "Enter value B : ";
    cin >> B;
    int ans = findBIdx(A, n, 4);
    cout << ans << endl;
    return 0;
}
// Given an array where all numbers appear twice except two no. which appear only once.
//  Find the 2 single numbers   arr= {3 6 4 4 6 8}

#include <iostream>
using namespace std;

int checkBit(int n, int i)
{
    return (n & (1 << i)) != 0;
}

void twoUnique(int a[], int n)
{

    // compute xor of all array
    int xorResut = 0;
    for (int i = 0; i < n; i++)
    {
        xorResut ^= a[i];
    }
    // find one position of set bit
    int pos = 0;
    for (int i = 0; i < 32; i++)
    {
        if (checkBit(xorResut, i))
        {
            pos = i;
            break;
        }
    }
    // Divide numbers based on whether the bit at position 0 is set or not and compute XOR for each group.
    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkBit(a[i], pos))
        {
            ans1 ^= a[i];
        }
        else
        {
            ans2 ^= a[i];
        }
    }
    cout << ans1 << " " << ans2 << endl;
}

int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Two Unique : ";
    twoUnique(arr, n);
    return 0;
}

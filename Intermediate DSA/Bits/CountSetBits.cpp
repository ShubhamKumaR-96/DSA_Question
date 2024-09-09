// Given N integer, Calculate hove many sets bits in N
#include <iostream>
using namespace std;

int countBits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        if ((n & 1) == 1)
        {
            cnt++;
        }
        n = n >> 1;
    }
    return cnt;
}

int main()
{
    int n;
    cout << "Enter the value of N : ";
    cin >> n;
    cout << "Total Set bits : " << countBits(n) << endl;

    return 0;
}
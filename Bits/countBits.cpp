#include <iostream>
using namespace std;

int countBits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int cnt = n % 2;
        sum = sum + cnt;
        n = n >> 1;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    cout << "Total set bits : " << countBits(n) << endl;
    return 0;
}
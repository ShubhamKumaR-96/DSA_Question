// Find sum oF N using recursive way

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sum(n - 1) + n;
}

int main()
{
    int n;
    cout << "Enter the value of N :";
    cin >> n;
    cout << "Total Sum : " << sum(n) << endl;

    return 0;
}
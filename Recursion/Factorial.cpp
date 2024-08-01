// Find factorial oF N using recursive way

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return fact(n - 1) * n;
}

int main()
{
    int n;
    cout << "Enter the value of N :";
    cin >> n;
    cout << "Total Sum : " << fact(n) << endl;

    return 0;
}
#include <iostream>
using namespace std;

bool checkIthPos(int n, int i)
{
    int mask = 1 << i;
    if ((n & mask) == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    int n, i;
    cout << "Enter the value of N : ";
    cin >> n;
    cout << "Enter the Ith position ";
    cin >> i;
    if (checkIthPos(n, i))
    {
        cout << "Setbit" << endl;
    }
    else
    {
        cout << "Unset bit" << endl;
    }

    return 0;
}
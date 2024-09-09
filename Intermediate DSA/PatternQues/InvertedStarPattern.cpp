#include <iostream>
using namespace std;

void invertedStarPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size N : ";
    cin >> n;
    invertedStarPattern(n);
}
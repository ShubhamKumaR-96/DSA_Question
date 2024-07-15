#include <iostream>
using namespace std;

void hollowReactnglePattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "*"; // First
        for (int j = 1; j <= n - 1; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "*" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size N : ";
    cin >> n;
    hollowReactnglePattern(n);
}
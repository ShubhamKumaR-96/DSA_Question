#include <iostream>
using namespace std;

void charPyramidPattern(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size N : ";
    cin >> n;
    charPyramidPattern(n);
}
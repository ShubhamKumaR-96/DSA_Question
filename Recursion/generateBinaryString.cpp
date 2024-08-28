// Generate all binary strings of length of n, without consective 1's.

#include <iostream>
using namespace std;

void generateString(string s, int n)
{
    if (n == 0)
    {
        cout << s << endl;
        return;
    }
    generateString(s + '0', n - 1);
    if (s == "" || s[s.length() - 1] == '0')
        generateString(s + '1', n - 1);
}

int main()
{
    int n;
    cout << "N : ";
    cin >> n;
    generateString("", n);
}
// Q => Input a string of size n and update all the odd positions in the string to character #
// consider 0-based indexing,   input = Pbwxshkui

#include <iostream>
using namespace std;

string oddIdx(string str)
{
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            str[i] = '#';
        }
    }
    return str;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string ans = oddIdx(str);
    cout << "After updating odd indices: " << ans << endl;
    return 0;
}

// Remove all occurance of 'a' from a string

#include <iostream>
using namespace std;

void skipChar(string ans, string str, int idx)
{
    if (idx == str.length())
    {
        cout << ans;
        return;
    }
    char ch = str[idx];
    if (ch == 'a')
        skipChar(ans, str, idx + 1);
    else
        skipChar(ans + ch, str, idx + 1);
}

int main()
{
    string str = "parmatama";
    string ans = "";
    skipChar(ans, str, 0);
}
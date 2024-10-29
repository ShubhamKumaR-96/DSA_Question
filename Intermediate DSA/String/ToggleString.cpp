#include <iostream>
using namespace std;

string toggleStr(string str)
{

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (str[i] ^ 32);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (str[i] ^ 32);
        }
    }
    return str;
}

int main()
{
    string str;
    getline(cin, str);
    string result = toggleStr(str);
    cout << result << endl;
    return 0;
}
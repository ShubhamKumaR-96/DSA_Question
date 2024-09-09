// Given s string S. Toggle the case of Every Char
// For eg=> a B c A E d  O/P => A b C a e D

#include <iostream>
using namespace std;

string toggleCase(string str)
{
    for (int i = 0; i < str.size(); i++)
    { 
        // for small case
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] ^ ('a' - 'A');
        }
        // for capital case
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] ^ ('a' - 'A');
        }
    }
    return str;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    str = toggleCase(str); // The modified string is returned
    cout << "Toggled string: " << str << endl;

    return 0;
}

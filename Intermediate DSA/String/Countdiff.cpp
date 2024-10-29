// Input a string and return the number of times the neighbouring chracters are different from
// each other    str= abbcdeffghh

#include <iostream>
#include <string>
using namespace std;

int countDiff(string str)
{
    int n = str.length();
    int i = 1, count = 0;
    while (i <= n)
    {
        if (n == 1)
            break;
        if (n == 2 && str[0] != str[1])
            count = 1;
        break;
        if (str[i - 1] != str[i] && str[i + 1] != str[i])
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    string str;
    getline(cin, str);
    cout << "Total diff : " << countDiff(str) << endl;
    return 0;
}
// given a string containg lower alphabet. sort the string  in dictory order
// for eg d a b a d e

#include <iostream>
using namespace std;

string sortingOrder(string str)
{
    int count[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        int idx = str[i] - 'a';
        count[idx]++;
    }
    str.clear();
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            str.push_back(i + 'a');
        }
    }

    return str;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    str = sortingOrder(str); // Sort the string and return it

    cout << "Sorted string: " << str << endl;

    return 0;
}

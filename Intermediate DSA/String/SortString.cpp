// given a string containg lower alphabet. sort the string  in dictory order
// for eg d a b a d e

#include <iostream>
using namespace std;

string sortingOrder(string str)
{
    int n = str.size();
    int count[26] = {0}; // Frequency array for 'a' to 'z'
    string result = "";  // Resultant string without spaces

    // Counting frequency of each character and ignoring spaces
    for (int i = 0; i < n; i++)
    {
        if (str[i] != ' ')
        { // Ignore spaces
            int index = str[i] - 'a';
            count[index] += 1;
        }
    }

    // Rebuilding the string in sorted order
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            result += (i + 'a');
        }
    }

    return result;
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

// input a string of length n and count all the consonants in the given string   i/p pwians

#include <iostream>
using namespace std;

int countConsonants(string str)
{
    int cnt = 0;
    for (char ch : str)
    {
        char lowechar = tolower(ch);
        if (lowechar >= 'a' && lowechar <= 'z' && lowechar != 'a' && lowechar != 'i' && lowechar != 'e' && lowechar != 'o' && lowechar != 'u')
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    string str;
    getline(cin, str);
    cout << "Total consonants : " << countConsonants(str);
    return 0;
}
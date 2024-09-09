// 242. Valid Anagram
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

#include <iostream>
#include <unordered_map>
using namespace std;

bool validAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;

    unordered_map<char, int> map1;
    for (int i = 0; i < s.length(); i++)
    {
        map1[s[i]]++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        char ch = t[i];
        if (map1.find(ch) != map1.end())
        {
            map1[ch]--;
            if (map1[ch] == 0)
                map1.erase(ch);
        }
        else
            return false;
    }

    if (map1.size() > 0)
        return false;
    return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";
    if (validAnagram(s, t))
    {
        cout << "Valid anagram" << endl;
    }
    else
    {
        cout << "Not valid anagram" << endl;
    }
}
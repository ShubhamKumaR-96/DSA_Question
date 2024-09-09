
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["shubh"] = 1;
    m["deva"] = 12;
    m["shiva"] = 3;

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    m.erase("shubh");
    cout << "After erasing" << endl;
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
}

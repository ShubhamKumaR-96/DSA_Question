#include <iostream>
using namespace std;

void towerofHanoi(int n, char a, char b, char c)
{
    if (n == 0)
        return;
    towerofHanoi(n - 1, a, c, b);
    cout << a << " => " << c << endl;
    towerofHanoi(n - 1, b, a, c);
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin>>n;
    char a, b, c;
    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >> b;
    cout << "Enter c :";
    cin >> c;
    towerofHanoi(n, a, b, c);
}
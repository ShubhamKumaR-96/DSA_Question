
#include <iostream>
using namespace std;

int powRec(int a, int b)
{
    if (b == 0)
        return 1;
    return a * powRec(a, b - 1);
}

int main()
{
    int a;
    cout << "Enter base : ";
    cin >> a;
    int b;
    cout << "Enter exponent : ";
    cin >> b;
    cout << a <<" raised to the power " << b << " is " << powRec(a, b) << endl;
    return 0;
}
// Print the No oF N increasing order by using recursive way

#include <iostream>
using namespace std;

void print(int n)
{

    if (n == 0)
    {
        return;
    }
    cout << n << " ";

    print(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value of N :";
    cin >> n;
    print(n);

    return 0;
}
// Given a String S :
// Given a start and end  index. Reverse the string from index Start to end;
// [note => without using inbuilt function];

#include <iostream>
using namespace std;

// Function to reverse the substring from start to end index
void reverse(char str[], int start, int end)
{
    // Swap characters from start and end moving towards the middle
    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main()
{
    // Declare and initialize the string
    char str[] = "abcdefg";
    int start, ending;
    cout << "Enter the start and End index : " << endl;
    cin >> start >> ending;

    // Call the reverse function
    reverse(str, start, ending);

    // Print the modified string
    cout << "Reversed string: " << str << endl;

    return 0;
}

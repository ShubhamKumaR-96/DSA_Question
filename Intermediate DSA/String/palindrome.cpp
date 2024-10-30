// check weather string is palindrome or not

#include <iostream>
using namespace std;

bool pailindrome(string str)
{
    int i = 0, j = str.size()-1;
    while (i < j)
    {
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
return true;     
}

int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin, str);
    if(pailindrome(str)){
        cout<<"Yes"<<endl;
    }else {
        cout<<"No"<<endl;

    }
    return 0;
}
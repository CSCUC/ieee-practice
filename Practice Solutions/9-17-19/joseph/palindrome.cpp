// Palindrome.cpp
#include <iostream>
#include <string>
#include <cstring> // using strcpy

using namespace std;

int main()
{
    string s = "";
    cin >> s;
    char str[s.size()+1];
    strcpy(str, &s[0]);
    for(unsigned int i = 0; i < s.size()/2; i++)
    {
           if(str[i] != str[s.size() - i - 1])
           {
               cout << s << " is not a palindrome.";
               exit(1);
           }
    }
    
    cout << s << " is a palindrome.";
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s,int i)
{
    if(i>s.length()/2)
      return true;
      return (s[i]==s[s.length()-i-1] ) && checkPalindrome(s,i+1); 
}
int main()
{
    string s;
    cout<<"Enter a string to check whether the given string is a palindrome or not?\n";
    cin>>s;
    if(checkPalindrome(s,0))
     cout<<"Palindrome\n";
     else
      cout<<"Not a palindrome\n";
    return 0;
}
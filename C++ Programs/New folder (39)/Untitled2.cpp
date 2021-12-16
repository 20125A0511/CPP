#include<bits/stdc++.h>
using namespace std;
string isPalindrome(string T)
{
// Stores the reverse of the
    // string S
string P = T;
string r;
    // Reverse the string P
reverse(P.begin(), P.end());

// If S is equal to P
if (T == P)
{
// Return "true"
cout<<"String is Palindrome No changes To be made";
}
else
{
cout<<"String is not palindrome and concatenation is done";
r=P+T;
}


// If S is equal to P
if (r == T)
{
// Return "true"
cout<<"String is Palindrome No changes To be made";
}
}
main()
{
string S;
cout<<"Enter String:";
cin>>S;
isPalindrome(S);
}

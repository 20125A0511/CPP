#include
<iostream>
#include<string>
using namespace std;
int
main
()
{
string
str
(
"nobody does like this"
)
;
string
key
(
"nobody"
)
;
size_t
f;
f = str.
rfind
(key);
if
(f != string::npos)
str.
replace
(f, key.
length
(),
"everybody"
);
cout << str << endl;
return
0
;
}

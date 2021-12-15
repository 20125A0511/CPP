#include <cctype>
#include <iostream>
using namespace std;

int main() {
  char c1 = 'A', c2 = 'b', c3 = '9';

  cout << (char) toupper(c1) << endl;
  cout << (char) toupper(c2) << endl;
  cout << (char) toupper(c3);

  return 0;
}

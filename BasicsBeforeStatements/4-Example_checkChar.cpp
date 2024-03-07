#include <climits>
#include <iostream>
using namespace std;
int main() {
  int i;
  char charGet;
  cin >> charGet;
  // for (i = 0; i < INT_MAX; i++) {
  if (charGet == 'a' || charGet == 'e' || charGet == 'i' || charGet == 'o' ||
      charGet == 'u') {
    cout << charGet << " is a vowel\n";
  }
  // } else if (charGet == i) {
  // cout << charGet << " is a integer\n";
  // } else {
  // cout << charGet << " is others";
  // }
  // }
  return 0;
}
#include <iostream>

using namespace std;
int main() {
  short a, b, c;
  cin >> a >> b >> c;
  short max11 = a;
  if (max11 < b) {
    max11 = b;
  }
  if (max11 < c) {
    max11 = c;
  }
  cout << max11 << endl;
  // another way to do this
  int a2, b2, c2;
  a2 = 10, b2 = 20, c2 = 30;

  int max2 = max(a2, max(b2, c2));
  cout << max2 << endl;
  return 0;
}

#include <iostream>
using namespace std;
int main() {
  int a = 10, b = 20, c;
  c = a;
  a = b;
  b = c;

  int d = 10, g = 20;

  d = d + g;
  g = d - g;
  d = d - g;

  cout << "changed a = " << a << " and b = " << b << endl;
  cout << "changed d = " << d << " and g = " << g;
  return 0;
}
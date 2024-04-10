#include <iostream>

using namespace std;
int main() {
  int i = 999;
  for (i; i > 100; i--) {
    if (i % 2 == 1) {
      cout << i << endl;
    }
  }
  return 0;
}
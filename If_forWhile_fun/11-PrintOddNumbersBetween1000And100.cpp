#include <iostream>

using namespace std;
int main() {
  int i;
  for (i= 999; i > 100; i--) {
    if (i % 2 == 1) {
      cout << i << endl;
    }
  }
  return 0;
}

#include <iostream>

using namespace std;
int main() {
  long long a, b;
  cin >> a >> b;
  if (a < b) {
    for (int i = a; i >= 0; i++) {
      if (a % i == 0 && b % i == 0) {
        cout << i;
      }
    }
  } else {
    for (int i = b; i >= 0; i++) {
      if (a % i == 0 && b % i == 0) {
        cout << i;
      }
    }
  }
  return 0;
}
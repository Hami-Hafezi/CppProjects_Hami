#include <iostream>

using namespace std;
int main() {
  int xNumberGet;
  cin >> xNumberGet;
  int countMaghsoomonAlaih = 0;
  for (int i = 2; i < xNumberGet; i++) {
    if (xNumberGet % i == 0) {
      countMaghsoomonAlaih++;
    }
  }
  cout << countMaghsoomonAlaih;
  return 0;
}
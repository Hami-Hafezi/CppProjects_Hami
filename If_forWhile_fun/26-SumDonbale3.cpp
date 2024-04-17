#include <iostream>
using namespace std;
int main() {
  unsigned long int zarb1 = 1;
  unsigned long int zarb2 = 1;
  int i1 = 1;
  while (i1 <= 30) {
    zarb1 *= i1;
    i1 += 2;
  }
  for (int i2 = 2; i2 <= 20; i2 += 2) {
    zarb2 *= i2;
  }
  long double mainZarb = (double)zarb1 / (double)zarb2;
  cout << mainZarb << endl;
  cout << (double)zarb1 / (double)zarb2;
  return 0;
}
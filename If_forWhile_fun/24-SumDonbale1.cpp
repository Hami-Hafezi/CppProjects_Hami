#include <iostream>
using namespace std;
int main() {
  float sum = 0.0f;
  for (int i = 1; i <= 1000; i++) {
    float aForAll = (1.0f / i);
    sum += aForAll;
  }
  cout << sum;
  return 0;
}
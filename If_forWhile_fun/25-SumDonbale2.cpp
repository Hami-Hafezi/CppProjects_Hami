#include <iostream>
using namespace std;
int main() {
  float sum = 0.0f;
  float mNumber = -1.0f;  
  for (int i = 1; i <= 1000; i++) {
    mNumber *= -1.0f; 
    float aForAll = (mNumber / i);
    sum += aForAll;
  }
  cout << sum;
  return 0;
}
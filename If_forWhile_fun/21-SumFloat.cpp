#include <iostream>

using namespace std;
int main() {
  float sumOfNumbers = 0.0f;
  for (int i = 0; i < 10; i++) {
    float floutNumber;
    cin >> floutNumber;
    sumOfNumbers += floutNumber;
  }
  cout << sumOfNumbers << endl;
  return 0;
}
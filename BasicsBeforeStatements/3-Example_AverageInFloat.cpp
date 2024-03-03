#include <iostream>
using namespace std;
int main() {
  int number_1, number_2;
  cin >> number_1 >> number_2;
  float floatAveNumber = static_cast<float>(number_1 + number_2) / 2;
  cout << floatAveNumber;
  return 0;
}
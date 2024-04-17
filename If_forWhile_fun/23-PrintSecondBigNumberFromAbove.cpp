#include <iostream>
using namespace std;
int main() {
  int biggestNumber = 0, biggestSecondNumber;
  for (int i = 10; i >= 1; i--) {
    short number;
    cin >> number;
    if (biggestNumber < number) {
      biggestSecondNumber = biggestNumber;
      biggestNumber = number;
    }
  }
  cout << biggestSecondNumber << endl;
  return 0;
}
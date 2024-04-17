#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int numberWorking, tempWorking;
  cin >> numberWorking;

  int numberForWork2;
  for (numberForWork2 = numberWorking; numberForWork2 >= 1;
       numberForWork2 /= 10) {
    tempWorking = tempWorking * 10 + numberForWork2 % 10;
  }
  cout << (tempWorking);
  
}
  //   unsigned int number_of_digits = 0;
  //   string nStr;
  //   do {
  //     ++number_of_digits;
  //     numberWorking /= 10;
  //   } while (numberWorking <= 0);
  //   for (int i = 0; i <= number_of_digits / 2; i++) {
  //     nStr = to_string(numberWorking);
  //     nStr[i] = nStr[number_of_digits - i];
  //   }
  //   cout << (nStr); return 0;
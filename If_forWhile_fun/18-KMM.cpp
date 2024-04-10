
#include <iostream>

using namespace std;
int main() {
  int number1, number2;
  cin >> number1 >> number2;
  for (int i = 1; i < 100; i++) {
    for (int j = 1; j <= 100; j++) {
      if (number1 * i == number2 * j) {
        int zarb = number1 * i;
        cout << zarb << endl;
      }
      break;
    }
  }
  return 0;
}
//   if (a < b) {
//     int k;
//     for (int i = 0; i < a; i++) {
//       for (int j = 1; j <= b; j++) {
//         if (a * i == b * j) {
//           int zarb = a * i;
//           cout << "KMM is :" << zarb;
//           break;
//         }
//       }
//     }
//   } else {
//     for (int i = 0; i < b; i++) {
//       for (int j = 1; j <= a; j++) {
//         if (a * i == b * j) {
//           int zarb = a * i;
//           cout << "KMM is :" << zarb;

//         }
//       }
//     }
//   }

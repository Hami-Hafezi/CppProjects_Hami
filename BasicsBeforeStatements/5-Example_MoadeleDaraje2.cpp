
#include <cmath>
#include <iostream>
using namespace std;
int main() {
  double a, b, c;
  cin >> a >> b >> c;
  double b24ac = (b * b) - (4 * a * c);
  double sq = sqrt(b24ac);
  cout << sq << endl;
  double result1 = (-1 * b) / (2 * a);
  double result2 = ((-1 * b) - sq) / (2 * a);
  double result3 = ((-1 * b) + sq) / (2 * a);
  if (b24ac == 0) {
    cout << result1 << endl;
  } else if (b24ac > 0) {
    cout << result3 << endl;
  } else if (b24ac < 0) {
    cout << result2 << endl;
  } else {
    cout << "this user input is not number and its invalid." << endl;
  }
  return 0;
}
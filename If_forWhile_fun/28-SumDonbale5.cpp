#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double baseNumber = -1;
  double result = 1.00;

  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= i; j++) {
       result += (1/(double)j);
    }
  }
  cout << setprecision(5) << result << endl; 
  return 0;
}
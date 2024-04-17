#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  long int n;
  double k = 1.0f;
  cin >> n;
  double sum = 0;
  for (int i= 1; i <= n; i++) {
    for (double j =1.0f; j <= i; j++) {
      sum += (double)(k / j);
    }
    k=-k;
  }
  cout << setprecision(3) << sum;
  return 0;
}
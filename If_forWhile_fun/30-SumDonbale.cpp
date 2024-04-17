#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int i;
  float n,x,sum = 0.0f;
  cin >> n >> x;

  for (i = 1; i <= n; i++) {
    sum += (pow(x,n)/i);
  }
  cout << setprecision(5) << "sum = " << sum << endl;
  return 0;
}
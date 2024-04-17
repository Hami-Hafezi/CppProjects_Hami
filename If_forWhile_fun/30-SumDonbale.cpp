#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int i,sum = 0;
  float n,x;
  cin >> n >> x;

  for (i = 1; i <= n; i++) {
    sum += (pow(x,n)/1);
  }
  cout << setprecision(5) << "sum = " << sum << endl;
  return 0;
}
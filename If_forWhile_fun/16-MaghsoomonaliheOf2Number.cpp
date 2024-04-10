// A school method based C++ program to
// check if a number is prime
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  long long a, b;
  cin >> a >> b;
  if (a > b) {
    for (int i = 1; i <= a; i++) {
      if (a % i == 0 && b % i == 0) {
        cout << i << endl;
      }
    }

  } else {
       for (int i = 1; i <= b; i++) {
      if (a % i == 0 && b % i == 0) {
        cout << i << endl;
      }
    }
  }
  return 0;
}
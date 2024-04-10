#include <iostream>

using namespace std;
int main() {
    long long number;
    cin >> number;
    long long i = number;
    int flag = 0;
    cout << "the number is : " << number << endl;
    while (i>=1) {
      flag++;
      i /= 10;
    }
    cout << flag;
  return 0;
}
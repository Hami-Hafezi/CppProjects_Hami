#include <iostream>

using namespace std;
int main() {
    long long number;
    cin >> number;
    long long i = number;
    int sum = 0;
    cout << "the number is : " << number << endl;
    while (i>=1) {
    int FirstDigit = 
      sum+=(i%10);
      i/=10;
    }
    cout<<"Sum of digits is : " << sum << endl;
  return 0;
}
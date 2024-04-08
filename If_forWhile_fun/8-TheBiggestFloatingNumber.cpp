#include <iostream>

using namespace std;
int main() {
  float floatingNmuber1, floatingNmuber2, floatingNmuber3;
  cin >> floatingNmuber1 >> floatingNmuber2 >> floatingNmuber3;
  if (floatingNmuber1 > floatingNmuber2) {
    if (floatingNmuber1 > floatingNmuber3) {
      if (floatingNmuber3 > floatingNmuber2) {
        cout << "The largest number is " << floatingNmuber1 << "\n"
             << "and " << floatingNmuber3 << " is bigger than"
             << floatingNmuber2;
      } else {
        cout << "The largest number is " << floatingNmuber1 << "\n"
             << "and " << floatingNmuber2 << " is bigger than"
             << floatingNmuber3;
      }
    }
  }
  if (floatingNmuber2 > floatingNmuber1) {
    if (floatingNmuber2 > floatingNmuber3) {
      if (floatingNmuber3 > floatingNmuber1) {
        cout << "The largest number is " << floatingNmuber2 << "\n"
             << "and " << floatingNmuber3 << " is bigger than"
             << floatingNmuber1;
      } else {
        cout << "The largest number is " << floatingNmuber2 << "\n"
             << "and " << floatingNmuber1 << " is bigger than"
             << floatingNmuber3;
      }
      cout << "The largest number is " << floatingNmuber1 << "\n"
           << "and its bigger than" << floatingNmuber3;
    }
  }
  if (floatingNmuber3 > floatingNmuber1) {
    if (floatingNmuber3 > floatingNmuber2) {
      if (floatingNmuber2 > floatingNmuber1) {
        cout << "The largest number is " << floatingNmuber3 << "\n"
             << "and " << floatingNmuber2 << " is bigger than"
             << floatingNmuber1;
      } else {
        cout << "The largest number is " << floatingNmuber3 << "\n"
             << "and " << floatingNmuber1 << " is bigger than"
             << floatingNmuber2;
      }
      cout << "The largest number is " << floatingNmuber1 << "\n"
           << "and its bigger than" << floatingNmuber3;
    }
  }
return 0;
}



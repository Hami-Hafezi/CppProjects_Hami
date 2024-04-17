#include <iostream>
using namespace std;
int main() {
  int biggestBadNumber = 0;
  for (int i = 10; i > 1; i--) {

    int userNumber;
    cin >> userNumber;
    if (userNumber <= 10 && userNumber > biggestBadNumber) {
      biggestBadNumber = userNumber;      
    }
  }
  cout << biggestBadNumber << endl;
  return 0;
}
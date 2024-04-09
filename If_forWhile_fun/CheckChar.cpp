#include <iostream>

using namespace std;
int main() {
  char xGetFromUser;
  cout << "tell me a single string" << endl;
  cin >> xGetFromUser;

  switch (xGetFromUser) {
  case 'a':
    cout << "its a part of alphbaet";
    break;
    case '1':
     cout << "its a part of numbers";
    break;
  }

  return 0;
}
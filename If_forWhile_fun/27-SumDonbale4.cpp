#include <iostream>
using namespace std;
double sumAll = 0;
int main() {

  for (int i = 1; i < 100; i += 2)
    sumAll += i * (i + 1.0) / (i + i + 1.0);
  cout << sumAll;
  return 0;
} 
 /*
   for (int i = 1; i <= 100; i += 2) {
      unsigned long int bala = 1;
      unsigned long int payeen = 1;
      for (int j = i; j <= i + 2; j++) {
        bala += j;
      }
      for (int j = i; j <= i + 2; j++) {
        payeen *= j;
      }
      sumAll += (double)bala/(double)payeen;
    }
  */
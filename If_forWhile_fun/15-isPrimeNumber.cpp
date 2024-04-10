#include <iostream>

using namespace std;
int main() {
  int xGetNumber;
  cin >> xGetNumber;
  int i;
  short count;
  for (i = 2; i < xGetNumber; i++) {
    if (xGetNumber % i == 0) {
      count++;
    }
  }
  if (count > 0) {
    cout << "not prime";
  } else {
    cout << "prime";
  }
  return 0;
}
/*
// C++ program to check whether a number 
// is prime or not using recursion 
#include <iostream> 
using namespace std; 

// function check whether a number 
// is prime or not 
bool isPrime(int n) 
{ 
	static int i = 2; 

	// corner cases 
	if (n == 0 || n == 1) { 
		return false; 
	} 

	// Checking Prime 
	if (n == i) 
		return true; 

	// base cases 
	if (n % i == 0) { 
		return false; 
	} 
	i++; 
	return isPrime(n); 
} 

// Driver Code 
int main() 
{ 

	isPrime(35) ? cout << " true\n" : cout << " false\n"; 
	return 0; 
} 

// This code is contributed by yashbeersingh42




*/
/*
// A school method based C++ program to 
// check if a number is prime 
#include <bits/stdc++.h> 
using namespace std; 

// Function check whether a number 
// is prime or not 
bool isPrime(int n) 
{ 
	// Corner case 
	if (n <= 1) 
		return false; 

	// Check from 2 to square root of n 
	for (int i = 2; i <= sqrt(n); i++) 
		if (n % i == 0) 
			return false; 

	return true; 
} 

// Driver Code 
int main() 
{ 
	isPrime(11) ? cout << "true\n" : cout << "false\n"; 
	return 0; 
}


*/
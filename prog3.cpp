// Find out whether a number is prime or not

#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter a number: ";
  cin >> n;

  if (n < 0) {
    cout << "Please enter positive numbers.";
    return 0;
  }

  int count = 0;

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      count++;
    }
    if (count > 2) break;
  }

  if (count == 2) {
    cout << n << " is a prime number" << endl;
  } else {
    cout << n << " is not a prime number" << endl;
  }
}
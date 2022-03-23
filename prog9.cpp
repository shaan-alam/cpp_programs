// Write a function factorial to find out the value of mCn
#include <iostream>
using namespace std;

unsigned long factorial (int n) {
  unsigned long prod = 1;

  for (int i = 1; i <= n; i++) {
    prod *= i;
  }

  return prod;
}

int main() {
  int m, n;

  cout << "Enter m: " << endl;
  cin >> m;
  cout << "Enter n: " << endl;
  cin >> n;

  if (m < n || m < 0 || n < 0) {
    cout << "Not possible!! Try another set of numbers." << endl;
    return 0;
  }

  double result = factorial(m) / (factorial(n) * factorial(m - n));

  cout << "m = " << m << endl;
  cout << "n = " << n << endl;
  cout << "mCn = " << result << endl;
}
// Find out prime fibonacci numbers

#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int n) {
  int factors = 0;

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) factors++;

    if (factors > 2) return false;
  }

  return factors == 2;
}

bool isFib (int n) {
  int a = 0;
  int b = 1;
  int c = a + b;

  if (n == a || n == b) return true;

  while (c <= n) {
    if (c == n) return true;

    a = b;
    b = c;
    c = a + b;
  }

  return false;
}

int countDigit (int n) {
  int temp = n;
  int count = 0;

  while (temp != 0) {
    temp /= 10;
    count++;
  }

  return count;
}

int main() {
  int range;
  cout << "Enter the range: " << endl;
  cin >> range;
  int count = 0;

  for (int i = 1; i <= range; i++) {
    if (isPrime(i) && isFib(i)) {
      cout << setw(countDigit(range)) << i << endl;
      count++;
    }
  }

  if (!count) {
    cout << "There are no numbers which are prime and fibonacci in this range." << endl;
  } else {
    cout << "There are " << count << " numbers which are prime and fibonacci in this range." << endl;
  }
  
  return 0;
}
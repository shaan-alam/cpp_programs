// Find the armstrong number in a range.

#include <iostream>
#include "cmath"
#include <iomanip>
using namespace std;

bool isArmstrong(int n) {
  int digitCount = 0;
  int temp = n;
  int sum = 0;

  while (temp != 0) {
    digitCount++;
    temp /= 10;
  }

  temp = n;

  while (temp != 0) {
    sum = sum + pow((temp % 10), digitCount);
    temp /= 10;
  }

  return sum == n;
}

int main() {
  int n;
  int count = 0;

  cout << "Enter the n: ";
  cin >> n;

  if (n <= 0) {
    cout << "Please enter positive non-zero number.." << endl;
    return 0;
  }

  for (int i = 1; i <= n; i++) {
    if (isArmstrong(i)) {
      cout << setw(5) << i << endl;
      count++;
    }
  }

  cout << "There are " << count << " armstrong numbers between 1 and " << n << endl;

}
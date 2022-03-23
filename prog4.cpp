// Find out and print the factors of a number

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
      cout << i << endl;
      count++;
    }  
  }

  cout << "There are " << count << " factors" << endl;
}
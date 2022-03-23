/* 
  Print the pattern - 
  $$$$$
  $$
  $$
  $$
  $$$$$
 */

#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;

  if (n < 0) {
    cout << "Enter positive numbers";
    return 0;
  }

  for (int x = 0; x < n; x++) {
    if (x == 0 || x == n - 1) {
      for (int y = 0; y < n; y++) {
        cout << "$";
      }
      cout << endl;
    } else {
      cout << "$$" << endl;
    }
  }
}


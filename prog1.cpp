// Print right triangle pattern

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

  for (int i = 0; i < n; i++) {
    for (int j = 0;j <= i; j++) {
      cout << "*" << " ";
    }
    cout << endl;
  }

}
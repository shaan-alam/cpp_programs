// Find the greatest number using ternary operator.
#include <iostream>
using namespace std;

int main() {
  int a, b, c;

  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "Enter c: ";
  cin >> c;
  
  int max = a;

  max = b > max ? b : max;
  max = c > max ? c : max;

  cout << "A : " << a << endl;
  cout << "B : " << b << endl;
  cout << "C : " << c << endl;
  cout << "Maximum : " << max << endl;
}
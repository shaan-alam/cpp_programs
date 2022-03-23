#include <iostream>
#include <cmath>
using namespace std;

int factorial (int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) fact *= i;
  return fact;
}

bool prime(int n) {
  int factors = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) factors++;

    if (factors > 2) return false;
  }

  return factors == 2;
}

void fibonacci(int n) {
  int a = 0;
  int b = 1;
  int c = a + b;

  cout << "Fibonacci series: " << endl;
  cout << a << endl;

  while (c <= n) {
    cout << c << endl;

    a = b;
    b = c;
    c = a + b;
  }
}

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

void primeFibonacci(int n) {
  int a = 0;
  int b = 1;
  int c = a + b;

  cout << "Prime Fibonacci series: " << endl;
  while (c <= n) {
    if (prime(c))
      cout << c << endl;

    a = b;
    b = c;
    c = a + b;
  }
}

int maximumNum(int a, int b, int c) {
  return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int reverseNum(int n) {
  int reverse = 0;
  int temp = n;

  while (temp != 0) {
    reverse = reverse * 10 + (temp % 10);
    temp /= 10;
  }

  return reverse;
}

int main() {
  int choice;
  char option = 'Y';

  do {
    int a, b, c, max, n;

    cout << "\n\n" << "================MENU===============" << "\n\n";
    cout << "1. Find out the factorial of a number" << endl;
    cout << "2. Determine if the given number is prime" << endl;
    cout << "3. Generate Fibonacci series upto n limit" << endl;
    cout << "4. Check if a number is armstrong number" << endl;
    cout << "5. Generate prime fibonacci number upto given limit n" << endl;
    cout << "6. Maximum of three integers using ternary operators" << endl;
    cout << "7. Reverse an integer." << endl;
    cout << "8. Exit" << endl;

    cout << "Enter your choice: " << endl;
    cin >> choice;

    switch (choice) {
      case 1: 
        cout << "Enter n: " << endl;
        cin >> n;

        if (n < 0) {
          cout << "Enter positive number" << endl;
          break;
        }

        cout << "Factorial : " << factorial(n);
        break;
      case 2: 
        cout << "Enter n: " << endl;
        cin >> n;

        if (n < 0) {
          cout << "Enter positive number" << endl;
          break;
        }

        if (prime(n)) {
          cout << n << " is a prime number." << endl;
        } else {
          cout << n << " is not a prime number." << endl;
        }
        break;
      case 3: 
        cout << "Enter n : " << endl;
        cin >> n;

        if (n <= 0) {
          cout << "Enter positive  non-zero number" << endl;
          break;
        }

        fibonacci(n);
        break;
      case 4:
        cout << "Enter n: " << endl;
        cin >> n;

        if (n < 0) {
          cout << "Enter positive number" << endl;
          break;
        }

        if (isArmstrong(n)) {
          cout << n << " is an armstrong number." << endl;
        } else {
          cout << n << " is not an armstrong number." << endl;
        }
        break;
      case 5: 
        cout << "Enter limit: " << endl;
        cin >> n;

        if (n < 0) {
          cout << "Enter positive number" << endl;
          break;
        }

        primeFibonacci(n);
        break;
      case 6:
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;

        max = maximumNum(a, b, c);
        cout << "Maximum = " << max << endl;
        break;
      case 7:
        cout << "Enter an integer: " << endl;
        cin >> n;
        cout << "Original number: " << n << endl;
        cout << "Reverse number : " << reverseNum(n) << endl;
        break;
      case 8:
        cout << "EXIT!!" << endl;
        return 0;
      default: 
        cout << "Wrong choice...Try again!!" << endl;
        break;
    }
    cout << "\nDo you wish to continue: " << endl;
    cin >> option;
    system("clear");
  } while (option == 'y' || option == 'Y');
}
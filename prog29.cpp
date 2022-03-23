#include <iostream>
#include <cmath>
using namespace std;

struct Fraction {
  int numerator;
  int denominator;
};

Fraction simplify(Fraction fr) {
  int small = abs(fr.numerator) < abs(fr.denominator) ? abs(fr.numerator) : abs(fr.denominator);
  int hcf = -1;

  for (int i = 1;i <= small; i++) {
    if (fr.numerator % i == 0 && fr.denominator % i == 0) {
      hcf = i;
    }
  }

  Fraction result {
    fr.numerator / hcf,
    fr.denominator / hcf
  };

  return result;
}

void readFraction (Fraction &fr) {
  string frac;
  cin >> frac;

  int pos = -1;

  for (int i = 0; i <= frac.length(); i++) {
    if (frac[i] == '/') {
      pos = i;
      break;
    }
  }

  fr.numerator = stoi(frac.substr(0, pos));
  fr.denominator = (pos == -1) ? 1 : stoi(frac.substr(pos + 1));
}

void printResult (Fraction fr) {
  if (fr.denominator == 1) {
    cout << "Result = " << fr.numerator << endl;
  } else if (fr.numerator == 0) {
    cout << "Result = 0" << endl;
  } else {
    cout << "Result = " << fr.numerator << "/" << fr.denominator << endl;
  }
}

Fraction addition(Fraction f1, Fraction f2) {
  Fraction result {
    (f1.numerator * f2.denominator) + (f1.denominator * f2.numerator),
    f1.denominator * f2.denominator
  };

  return simplify(result);
}

Fraction substraction(Fraction f1, Fraction f2) {
  Fraction result {
    (f1.numerator * f2.denominator) - (f1.denominator * f2.numerator),
    f1.denominator * f2.denominator
  };

  return simplify(result);
}

Fraction multiplication(Fraction f1, Fraction f2) {
  Fraction result {
    f1.numerator * f2.numerator,
    f1.denominator * f2.denominator
  };

  return simplify(result);
}

Fraction division(Fraction f1, Fraction f2) {
  Fraction result {
    f1.numerator * f2.denominator,
    f1.denominator * f2.numerator
  };

  return simplify(result);
}

int main() {

  Fraction f1, f2, result;

  char choice, option;

  do {
    cout << "\n====================Fraction Calculator====================\n" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Substraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your choice: " << endl;
    cin >> choice;

    switch(choice) {
      case '+':
        cout << "Enter first fraction: " << endl;
        readFraction(f1);
        cout << "Enter second fraction: " << endl;
        readFraction(f2);
  
        if (f1.denominator == 0 || f2.denominator == 0) {
          cout << "Fractions cannot have zero as denominator" << endl;
          break;
        }

        result = addition(f1, f2);

        cout << "\nFirst Fraction : " << f1.numerator << "/" << f1.denominator << endl;
        cout << "Second Fraction : " << f2.numerator << "/" << f2.denominator << endl;

        printResult(result);
        break;
      case '-':
        cout << "Enter first fraction: " << endl;
        readFraction(f1);
        cout << "Enter second fraction: " << endl;
        readFraction(f2);

        if (f1.denominator == 0 || f2.denominator == 0) {
          cout << "Fractions cannot have zero as denominator" << endl;
          break;
        }

        result = substraction(f1, f2);

        cout << "\nFirst Fraction : " << f1.numerator << "/" << f1.denominator << endl;
        cout << "Second Fraction : " << f2.numerator << "/" << f2.denominator << endl;

        printResult(result);
        break;
      case '*':
        cout << "Enter first fraction: " << endl;
        readFraction(f1);
        cout << "Enter second fraction: " << endl;
        readFraction(f2);

        if (f1.denominator == 0 || f2.denominator == 0) {
          cout << "Fractions cannot have zero as denominator" << endl;
          break;
        }

        result = multiplication(f1, f2);

        cout << "\nFirst Fraction : " << f1.numerator << "/" << f1.denominator << endl;
        cout << "Second Fraction : " << f2.numerator << "/" << f2.denominator << endl;

        printResult(result);
        break;
      case '/':
        cout << "Enter first fraction: " << endl;
        readFraction(f1);
        cout << "Enter second fraction: " << endl;
        readFraction(f2);

        if (f1.denominator == 0 || f2.denominator == 0) {
          cout << "Fractions cannot have zero as denominator" << endl;
          break;
        }

        result = division(f1, f2);

        cout << "\nFirst Fraction : " << f1.numerator << "/" << f1.denominator << endl;
        cout << "Second Fraction : " << f2.numerator << "/" << f2.denominator << endl;

        printResult(result);
        break;
      case '5':
        return 0;
      default:
        cout << "Wrong choice...Try again!";
        break;
    }

    cout << "\nDo you wish to continue??" << endl;
    cin >> option;
    system("clear");

  } while (option == 'y' || option == 'Y');

}
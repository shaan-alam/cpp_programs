#include <iostream>
using namespace std;

struct Complex {
  int real;
  int imaginary;
};

void exchange(Complex &c1, Complex &c2) {
  Complex temp = c1;
  c1 = c2;
  c2 = temp;
}

Complex addition (Complex c1, Complex c2) {
  Complex result {
    c1.real + c2.real,
    c1.imaginary + c2.imaginary
  };

  return result;
}

void readComplex (Complex &c) {
  string comp;
  cin >> comp;

  int pos = -1;

  for (int i = 0;i < comp.length(); i++) {
    if (comp[i] == '+') {
      pos = i;
      break;
    }
  }

  c.real = stoi(comp.substr(0, pos));
  c.imaginary = stoi(comp.substr(pos + 1, comp.length() - 1));
}

void printComplex (Complex c) {
  cout << c.real << "+" << c.imaginary << "i" << endl;
}

int main() {
  
  Complex c1, c2, sum;
  char option, choice;

  do {

    cout << "A. Add two Complex number" << endl;
    cout << "B. Exchange two Complex number" << endl;
    cout << "C. Exit" << endl;
    
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice) {
      case 'A':
      case 'a':
        cout << "Enter first Complex Number : ";
        readComplex(c1);
        cout << "Enter second Complex Number : ";
        readComplex(c2);

        cout << "First Complex number: ";
        printComplex(c1);
        cout << "Second Complex number: ";
        printComplex(c2);

        sum = addition(c1, c2);

        cout << "Sum = ";
        printComplex(sum);

        break;
      case 'B':
      case 'b':
        cout << "Enter first Complex Number : " << endl;
        readComplex(c1);
        cout << "Enter first Complex Number : " << endl;
        readComplex(c2);

        cout << "\nFirst Complex number: ";
        printComplex(c1);
        cout << "Second Complex number: ";
        printComplex(c2);

        cout << "\nAfter exchanging values : \n" << endl;
        exchange(c1, c2);
        cout << "First Complex number: ";
        printComplex(c1);
        cout << "Second Complex number: ";
        printComplex(c2);
        break;
      default:
        cout << "Wrong Choice... Try again" << endl;
    } 
      
    cout << "Do you wish to continue??";
    cin >> option;
    system("clear");
  } while (option == 'y' || option == 'Y');
}
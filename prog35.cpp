#include <iostream>
using namespace std;

class Complex {
  private:
    int real;
    int imaginary;

  public:
    Complex() {
      this->real = this->imaginary = 0;
    }

    Complex(int value) {
      this->real = this->imaginary = value;
    }

    Complex(int r, int i) {
      this->real = r;
      this->imaginary = i;
    }

    Complex Add(Complex C1) {
      Complex result;

      result.real = this->real + C1.real;
      result.imaginary = this->imaginary + C1.imaginary;

      return result;
    }

    void Add(Complex C1, Complex C2) {
      this->real = C1.real + C2.real;
      this->imaginary = C1.imaginary + C2.imaginary;
    }

    void display() {
      cout << this->real << " + " << this->imaginary << "i" << endl;
    }
};

int main() {
  int c1, r2, c2;

  cout << "Enter C1: " << endl;
  cin >> c1;

  Complex C1(c1); 

  cout << "Enter C2's real part: " << endl;
  cin >> r2;
  cout << "Enter C2's imaginary part: " << endl;
  cin >> c2;
  
  Complex C2(r2, c2); 

  Complex C3;
  C3 = C1.Add(C2);

  cout << "C1: ";
  C1.display();

  cout << "C2: ";
  C2.display();

  cout << "Sum of two Complex Numbers: ";
  C3.display();

  cout << "Sum of two Complex Numbers: ";
  C3.Add(C1, C2);
  C3.display();

  return 0;
}
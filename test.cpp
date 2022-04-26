#include <iostream>
using namespace std;

const int max_rows = 10;
const int max_cols = 10;

class Matrix {
  private:
    int rows, cols;
    int a[max_rows][max_cols];
  
  public:
    Matrix() {
      this->rows = this->cols = 0;
      this->a[0][0];
    }

    Matrix(int r, int c) {
      this->rows = r;
      this->cols = c;


      this->a[rows][cols];

      for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
          cin >> this->a[i][j];
        }
      }
    }

    void Multiply(Matrix m1, Matrix m2) {
      if (m2.rows != m1.cols) {
        cout << "Cannot" << endl;        
      } else {
        this->rows = m1.rows;
        this->cols = m2.cols;

        for (int i = 0; i < m1.rows; i++) {
          for (int j = 0; j < m2.cols; j++) {
            int sum = 0;
            for (int k = 0; k < m2.rows; k++) {
              sum = sum + (m1.a[i][k] * m2.a[k][j]);
              this->a[i][j] = sum;
            }
          }
        }
      }
    }

    void printMatrix() {
      for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j < this->cols; j++) {
          cout << this->a[i][j] << "\t";
        }
        cout << endl;
      }
    }
};

int main() {
  Matrix m1(2, 2), m2(2, 2);

  Matrix result;

  result.Multiply(m1, m2);


  cout << "First matrix: " << endl;
  m1.printMatrix();

  cout << "Second matrix: " << endl;
  m2.printMatrix();

  cout << "Result matrix: " << endl;
  result.printMatrix();
}
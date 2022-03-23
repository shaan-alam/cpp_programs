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

    Matrix(int rows, int cols) {
      this->rows = rows;
      this->cols = cols;

      this->a[this->rows][this->cols];

      for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j < this->cols; j++) {
          cin >> this->a[i][j];
        }
      }
    }

    void Add(Matrix m1, Matrix m2) {
      this->rows = m1.rows;
      this->cols = m1.cols;

      for (int i = 0; i < m1.rows; i++) {
        for (int j = 0; j < m1.cols; j++) {
          this->a[i][j] = m1.a[i][j] + m2.a[i][j];
        }
      }
    }    


    void Transpose() {
      for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j < this->cols; j++) {
          int tmp = this->a[i][j];
          this->a[i][j] = this->a[j][i];
          this->a[j][i] = tmp;
        }
      }

      int temp = this->rows;
      this->rows = this->cols;
      this->cols = temp;
    }

    void Multiply(Matrix m1, Matrix m2) {
      if (m2.rows != m1.cols) {
        cout << "Cannot multiply matrices..." << endl;
      } else {
        this->rows = m1.rows;
        this->cols = m2.cols;

        for (int i = 0; i < m1.rows; i++) {
          for (int j = 0; j < m2.cols; j++) {
            int sum = 0;
            for (int k = 0; k < m2.rows; k++) {
              sum += m1.a[i][k] * m2.a[k][j];
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
  char option;
  int choice;

  do {
    cout << "\n\t\t 📝 Matrix Algebra" << "\n===================================================\n\n";
    cout << "1. Matrix Addition." << endl;
    cout << "2. Matrix Multiplication." << endl;
    cout << "3. Matrix Transpose." << endl;

    cout << "Enter your choice: " << endl;
    cin >> choice;    

    switch (choice) {
      case 1: {
        int r1, c1, r2, c2;
        cout << "First Matrix: " << endl;
        cout << "Enter no of rows: " << endl;
        cin >> r1;
        cout << "Enter no of cols: " << endl;
        cin >> c1;
        
        cout << "Second Matrix: " << endl;
        cout << "Enter no of rows: " << endl;
        cin >> r2;
        cout << "Enter no of cols: " << endl;
        cin >> c2;

        if (r1 != r2 || c1 != c2) {
          cout << "Cannot add matrices.." << endl; 
          break;
        } else {
          cout << "Enter first matrix: " << endl;
          Matrix M1(r1, c1);
          // M1.readMatrix();

          cout << "Enter second matrix: " << endl;
          Matrix M2(r2, c2);
          // M2.readMatrix();

          Matrix Sum;
          Sum.Add(M1, M2);
          cout << "Sum of matrices: " << endl;
          Sum.printMatrix();
        }
        break;
      }  
      
      case 2: {
        int r1, c1, r2, c2;
        cout << "First Matrix: " << endl;
        cout << "Enter no of rows: " << endl;
        cin >> r1;
        cout << "Enter no of cols: " << endl;
        cin >> c1;

        cout << "Second Matrix: " << endl;
        cout << "Enter no of rows: " << endl;
        cin >> r2;
        cout << "Enter no of cols: " << endl;
        cin >> c2;
        
        if (c1 != r2) {
          cout << "Cannot multiply matrices..." << endl;
          break;
        } else {
          cout << "Enter first matrix: " << endl;
          Matrix M1(r1, c1);
          // M1.readMatrix();
          
          cout << "Enter second matrix: " << endl;
          Matrix M2(r2, c2);
          // M2.readMatrix();

          Matrix Product;
          Product.Multiply(M1, M2);
          cout << "Product of matrices: " << endl;
          Product.printMatrix();
        }
        break;
      }
      case 3: {
        int r, c;

        cout << "Enter no of rows: " << endl;
        cin >> r;
        cout << "Enter no of cols: " << endl;
        cin >> c;

        cout << "Enter Original Matrix: " << endl;        
        Matrix M1(r, c);
        cout << "Original Matrix: " << endl;
        M1.printMatrix();

        cout << "Transpose Matrix: " << endl;
        M1.Transpose();
        M1.printMatrix();
        break;        
      }
    }

    cout << "Do you wish to continue??" << endl;
    cin >> option;

    system("clear");
  } while(option != 'n' || option != 'N');


  return 0;
}
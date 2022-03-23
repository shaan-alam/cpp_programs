#include <iostream>
using namespace std;

void readMatrix(int matrix[][2], int rows) {
  cout << "Enter matrix elements: " << endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> matrix[i][j];
    }
  }
}

void printMatrix(int matrix[][2], int rows) {
  cout << "Matrix: " << endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < 2; j++) {
      cout << matrix[i][j] << "\t";
    }
    cout << endl;
  }
}

int main() {
  int rows;

  cout << "Enter no of rows: " << endl;
  cin >> rows;

  if (rows > 10) {
    cout << "Please enter row no less than 10" << endl;
    return 0;
  }

  int matrix[10][2];

  readMatrix(matrix, rows);
  printMatrix(matrix, rows);
}
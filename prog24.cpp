#include <iostream>
#include <iomanip>
using namespace std;


void printHeadings() {
  system("clear");
  cout << setw(50) << "📝 RESULT" << endl;
  cout << "======================================================================================================\n" << endl;

  cout << "\t\t\tDBMS \t OS \t CSA \t C++ \t  C Lang \t\tAverage" << endl;
}

int findMax (int mat[][5], int col, int n) {
  int max = -1;

  for (int i = 0; i < n; i++) {
    if (mat[i][col] > max) max = mat[i][col];
  }

  return max;
}

int findMin (int mat[][5], int col, int n) {
  int min = 100;

  for (int i = 0; i < n; i++) {
    if (mat[i][col] < min) min = mat[i][col];
  }

  return min;
}

void printReport(int matrix[][5], int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    cout << "🔸Student " << i + 1 << "\t ||";
    for (int j = 0; j < 5; j++) {
      cout << setw(8) << matrix[i][j];
      sum += matrix[i][j];
    }
    cout << "\t\t||\t" << setw(5) << float(sum) / 5.0 << endl; // printing here
    sum = 0; // reinitialise sum to 0 for next iteration
  }
  
  cout << "======================================================================================================\n" << endl;

  cout << "🔸Average" << setw(10) << "||";
  for (int j = 0; j < 5; j++) {
    for (int i = 0; i < n; i++) {
      sum += matrix[i][j];
    }
    cout << setw(8) << setprecision(2) << float(sum) / n;
    sum = 0;
  }

  cout << endl;

  cout << "🔸Maximum" << setw(10) << "||";
  for (int i = 0; i < 5; i++) {
    cout << setw(8) << findMax(matrix, i, n);
  }

  cout << endl;

  cout << "🔸Minimum" << setw(10) << "||";
  for (int i = 0; i < 5; i++) {
    cout << setw(8) << findMin(matrix, i, n);
  }
  cout << endl;
}

int main() {
  int matrix[10][5];

  for (int i = 0; i < 10; i++) {
    cout << "Enter marks for student " << (i + 1) << ": " << endl;
    for (int j = 0; j < 5; j++) {
      cin >> matrix[i][j];
    }
  }

  printHeadings();
  printReport(matrix, 10);

  return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n, m;
  cout << "Enter no of rows: " << endl;
  cin >> n;
  cout << "Enter no of columns: " << endl;
  cin >> m;
  
  int matrix[n][m];

  if (n <= 0 || m <= 0) {
    cout << "Please enter positive non-zero dimensions.";
    return 0;
  }

  // Filling matrix with values
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {

      if (i + j == m - 1) { // condition for right diagonal
        matrix[i][j] = 0;
      } else if (j < m - i) { // condition for upper left triangle
        matrix[i][j] = 1;
      } else { // condition for bottom right triangle
        matrix[i][j] = -1;
      }
      
    }
  }

  cout << "Resultant matrix : " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << setw(5) << matrix[i][j];
    } 
    cout << endl;
  }
}
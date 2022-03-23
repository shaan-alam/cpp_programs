#include <iostream>
using namespace std;

int main() {
  int n, m;

  cout << "Enter no of rows: "  << endl;
  cin >> n;

  cout << "Enter no of cols: "  << endl;
  cin >> m;

  int matrix[n][m];

  if (n <= 0 || m <= 0) { 
    cout << "Please enter positive non-zero dimensions.";
    return 0;
  } else {
    cout << "Enter matrix elements : " << endl;

     for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
        cin >> matrix[i][j];
      }
    }

    cout << "Matrix : " << endl;
    
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cout << matrix[i][j] << "\t";
      }
      cout << endl;
    }
  }

}
#include <iostream>
using namespace std;

void printArray(int arr[], int size);

int getMax (int array[], int n) {
  int max = array[0];

  for (int i = 0; i < n; i++) {
    if (array[i] > max) max = array[i];
  }

  return max;
}

int getMin (int array[], int n) {
  int min = array[0];
  
  for (int i = 0; i < n; i++) {
    if (array[i] < min) min = array[i];
  }

  return min;
}

int main() {
  int n;

  cout << "Enter array size: " << endl;
  cin >> n;

  int array[n];

  cout << "Enter array elements : " << endl;
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  int max = getMax(array, n);
  int min = getMin(array, n);
  
  printArray(array, n);
  cout << "Maximum number : " << max << endl;
  cout << "Minimum number : " << min << endl;
}

void printArray(int arr[], int size) {
  cout << "Array elements are: " << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n\n";
}
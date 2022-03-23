#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n\n";
}

void reverseArray (int arr[], int size) {
  int temp = 0;

  for (int i = 0, j = size - 1; i < j; i++, j--) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

int main() {
  int n;

  cout << "Enter array size: " << endl;
  cin >> n;

  if (n <= 0) {
    cout << "Please enter size greater than zero.";
    return 0;
  }

  int array[n];

  cout << "Enter array elements : " << endl;
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  cout << "Original Array : " << endl;
  printArray(array, n);

  reverseArray(array, n);

  cout << "Reversed Array : " << endl;
  printArray(array, n);
}
#include <iostream>
using namespace std;

void printArray(int array[], int length) {
  for (int i = 0; i < length; i++) {
    cout << array[i] << (i != length - 1 ? ", " : ".");
  }
  cout << endl;
}

int maxmin(int a[], int size, string option = "max") {
  int max = a[0], min = a[0];

  for (int index = 0; index < size; index++) {
    if (a[index] > max) max = a[index];
    if (a[index] < min) min = a[index];
  }

  return option == "max" ? max : min;
}

int main() {
  int size;

  cout << "Enter array size: " << endl;
  cin >> size;

  int array[size];

  cout << "Enter array elements: " << endl;
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }

  int min = maxmin(array, size, "min");
  int max = maxmin(array, size);

  cout << "Array elements are : ";
  printArray(array, size);

  cout << "Maximum value: " << max << endl;;
  cout << "Minimum value: " << min << endl;;

} 
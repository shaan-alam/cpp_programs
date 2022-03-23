#include <iostream>
using namespace std;

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void shiftArrayElements (int array[], int size, int pos) {
  for (int i = pos; i < size; i++) {
    array[i] = array[i + 1];
  }

  array[size - 1] = 0;
}

void removeDuplicates(int array[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size;) {
      if (array[i] == array[j]) {
        shiftArrayElements(array, size, j);
        size--;
      } else {
        j++;
      }
    }
  }
}


int main() { 
  int n;
  cout << "Enter array size: ";
  cin >> n;

  if (n <= 0) {
    cout << "Please enter non-zero positive size.";
    return 0;
  }

  int array[n];

  cout << "Enter array elements: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  cout << "Array elements are : " << endl;
  printArray(array, n);

  removeDuplicates(array, n);
  
  cout << "Array elements after removing duplicates are : " << endl;
  printArray(array, n);
}
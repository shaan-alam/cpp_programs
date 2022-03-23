#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n\n";
}

void transferEvenNumbers(int array[], int size, int evens[]) {
  int k = 0;

  for (int i = 0; i < size; i++) {
    if (array[i] % 2 == 0) {
      evens[k] = array[i];
      k++;
    }
  }
}

void compressArray(int array[], int size, int evenCount) {
  int temp, k = 0;

  // To shift the even numbers on the left size
  for (int i = 0; i < size; i++) {
    if (array[i] % 2 == 0) {
      temp = array[i];
      array[i] = array[k];
      array[k] = temp;
      k++;
    }
  }

  // To set the remaining odd elements in the array to 0
  for (int i = evenCount; i < size; i++) {
    array[i] = 0;
  }
}

int main() {
  int n, evenCount = 0;

  cout << "Enter array size : " << endl;
  cin >> n;

  int array[n];

  cout << "Enter array elements: " << endl; 
  for (int i = 0; i < n; i++) {
    cin >> array[i];
    if (array[i] % 2 == 0) evenCount++;
  }

  int evens[evenCount];
  transferEvenNumbers(array, n, evens);

  cout << "Original array: ";
  printArray(array, n);


  cout << "Even numbers array: ";
  printArray(evens, evenCount);

  compressArray(array, n, evenCount);

  cout << "Orignal array after compression: ";
  printArray(array, n);
}
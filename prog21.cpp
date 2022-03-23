// WAP to delete kth element from an array
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n\n";
}

void removeKElement (int array[], int size, int k) {
  int temp;
  for (int i = k; i < size - 1; i++) {
    array[i] = array[i + 1];
  } 

  array[size - 1] = 0;
}

int main() {
  int n, k;
  cout << "Enter array size: ";
  cin >> n;

  if (n <= 0) {
    cout << "Please enter non-zero positive size." << endl;
    return 0;
  }

  int array[n];

  cout << "Enter array elements: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  cout << "Enter k: " << endl;
  cin >> k;

  if (k > n) {
    cout << "Please enter K within array range." << endl;
    return 0;
  }

  cout << "Original array : " << endl;
  printArray(array, n);

  removeKElement(array, n, k);
  
  cout << "After removing kth element : " << endl;
  printArray(array, n);
}
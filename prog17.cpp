#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  cout << "Array Elements are : " << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n\n";
}

int findFrequency (int arr[], int size, int searchValue) {
  int frequency = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == searchValue) frequency++;
  }

  return frequency;
}

int main() {
  int n, searchValue = 0;

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

  cout << "Enter the number you want to find frequency for: " << endl;
  cin >> searchValue;

  printArray(array, n);

  int frequency = findFrequency(array, n, searchValue);
  
  cout << "Frequencey of " << searchValue << " is : " << frequency << endl;
}
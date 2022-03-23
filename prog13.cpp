// WAP to find the average of the array elements
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  cout << "Array: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int size; 

  cout << "Enter size of the array: "  << endl;
  cin >> size;

  int array[size], sum = 0;

  cout << "Enter Array elements: " << endl;
  for (int i = 0; i < size; i++) {
    cin >> array[i];
    sum += array[i];
  }

  printArray(array, size);
  cout << "\nAverage : " << (double(sum) / size) << endl;

}

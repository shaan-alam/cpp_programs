#include <iostream>
using namespace std;

void swap (int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

int main() {
  int i = 10, j = 20;
  cout << "Before swapping" << endl;
  cout << "i : " << i << endl;
  cout << "j : " << j << endl;
  
  swap(i, j);

  cout << "After swapping" << endl;
  cout << "i : " << i << endl;
  cout << "j : " << j << endl;

}
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  fstream file;
  string str;
  string longest;
  int max = -1;

  file.open("sample_text.txt", ios::in);

  if (!file) {
    cout << "Cannot create file!!" << endl;
  }
 
  while (getline(file, str)) {
    int len = str.length();

    if (len > max) {
      max = len;
      longest = str;
    }
  }

  cout << "Longest line: " << longest << endl;
  cout << "Length: " << max << endl;
}
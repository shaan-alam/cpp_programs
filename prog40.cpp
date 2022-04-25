#include <iostream>
using namespace std;

string reverse(string str) {
  string result = "";

  for (int i = str.length() - 1; i >= 0; i--) {
    result += str[i];
  }

  return result;
} 

int main() {
  string result = "";
  string str, temp = "";

  cout << "Enter the string: " << endl;
  getline(cin, str);

  for (int i = 0; i < str.length(); i++) {
    if (str[i] != ' ') {
      temp += str[i];
    } else {
      result += reverse(temp) + " ";
      temp = "";
    }
  }

  result += reverse(temp);

  cout << "Original string:" << str << endl;
  cout << "New String:" << result << endl;
}
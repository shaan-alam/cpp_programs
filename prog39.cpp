#include <iostream>
// #include <string>
using namespace std;

string removeChar (string str, char x) {
  string result = "";

  for (int i = 0; i < str.length(); i++) {
    if (str[i] != x) {
      result += str[i];
    }
  }

  return result;
}

string removeString (string str, string x) {
  if (str.find(x) == -1) {
    cout << "String not found!!" << endl;
    return "";
  }

  int pos = str.find(x);

  while (pos != -1) {
    str = str.erase(str.find(x), x.length());
    pos = str.find(x);
  }

  return str;
}

int main() {

  int choice;
  string str, result; char x; char option;

  do {
    cout << "1. Remove a character." << endl;
    cout << "2. Remove a string." << endl;
    cout << "3. Exit." << endl;

    cin >> choice;


    switch(choice) {
      case 1: {
        cin.ignore();

        cout << "Enter the string : " << endl;
        getline(cin, str);

        cout << "Enter the character to remove: " << endl;
        cin >> x;

        result = removeChar(str, x);
        cout << "After replacing the character: " << result << endl;
        break;    
      }

      case 2: {
        cin.ignore();
        
        cout << "Enter the string : " << endl;
        getline(cin, str);

        cout << "Enter the string to remove: " << endl;
        string word;
        getline(cin, word);

        result = removeString(str, word);
        
        if (result != "") {
          cout << "After replacing the string: " << result << endl;
        }
        break;
      }
      case 3: {
        return 0;
      }

      defualt: {
        cout << "Wrong choice!!" << endl;
      }
    }

    cout << "Do you wish to continue??" << endl;
    cin >> option;

    system("clear");

  } while (option == 'Y' || option == 'y');


  return 0;
}
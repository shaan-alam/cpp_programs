#include <iostream>
using namespace std;

int great(int a, int b) {
  return a > b ? a : b;
}

float great(float a, float b) {
  return a > b ? a : b;
}

string great(string a, string b) {
  return a > b ? a : b;
}

int main() {
  
  char option;

  do {
    cout << "1. Find greater of two integers." << endl;
    cout << "2. Find greater of two floating point values." << endl;
    cout << "3. Find greater of two strings." << endl;

    int choice;

    cout << "Enter choice: " << endl;
    cin >> choice;

    string m, n;
    int a, b;
    float x, y;

    switch(choice) {
      case 1: 
        cout << "Enter two integers: " << endl;
        cin >> a;
        cin >> b;

        cout << "Greater of two integers: " << great(a, b) << endl;
        break;
      case 2:
        cout << "Enter two floating point values: " << endl;
        cin >> x;
        cin >> y;

        cout << "Greater of two floating point values: " << great(x, y) << endl;
        break;
      case 3:
        cout << "Enter two strings: " << endl;
        cin >> m;
        cin >> n;

        cout << "Greater of two string values: " << great(m, n) << endl;
        break;
      default:
        cout << "Wrong choice..." << endl;
    }

    cout << "Do you wish to continue??" << endl;
    cin >> option;

    system("clear");
  } while (option == 'y' || option == 'Y');

  

  return 0;
}
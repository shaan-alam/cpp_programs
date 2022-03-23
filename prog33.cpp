#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double radius) {
  return 3.14 * pow(radius, 2);
}

double calculateArea(double length, double width) {
  return length * width;
}

int calculateArea(int radius, int height) {
  return 2 * 3.14 * radius * (radius + height);
}
 
int main() {
  char option;
  double radius, length, width;
  int r, h;


  do {
    cout << "1. Calculate area of circle." << endl;
    cout << "2. Calculate area of rectangle." << endl;
    cout << "3. Calculate area of cylinder." << endl;

    int choice;

    cout << "Enter your choice : " << endl;
    cin >> choice;

    switch(choice) {
      case 1:
        cout << "Enter radius of the circle : ";
        cin >> radius;

        cout << "Area of the circle is = " << calculateArea(radius) << endl;
        break;
      case 2:
        cout << "Enter length of the rectangle : " << endl;
        cin >> length;

        cout << "Enter width of the rectangle : " << endl;
        cin >> width;

        cout << "Area of the rectangle = " << calculateArea(length, width) << endl;
        break;
      case 3:
        cout << "Enter the radius of the cylinder: " << endl;
        cin >> r;
        cout << "Enter the height of the cylinder : " << endl;
        cin >> h;

        cout << "Area of the cylinder : " << calculateArea(r, h) << endl;
        break;
      default: {
        cout << "Wrong choice...Try again!";
      }
    }

    cout << "Do you wish to continue??" << endl;
    cin >> option;

    system("clear");
  } while (option == 'y' || option == 'Y');
}
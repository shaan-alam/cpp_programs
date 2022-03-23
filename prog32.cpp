#include <iostream>
using namespace std;

class Room {
  private:
    double length;
    double width;
    double height;

  public:
    Room() {
      length = width = height = 0;
    }

    Room(double l, double w, double h) {
      length = l;
      width = w;
      height = h;
    }

    double calculateArea() {
      return this->length * this->width;
    }

    double calculateVolume() {
      return this->length * this->width * this-> height;
    }
};


int main() {
  double l, w, h;

  cout << "Enter Room 1 Dimensions: " << endl;
  cin >> l;
  cin >> w; 
  cin >> h;

  Room R1(l, w, h);

  cout << "Enter Room 2 Dimensions: " << endl;
  cin >> l;
  cin >> w; 
  cin >> h;

  Room R2(l, w, h);  

  cout << "Room 1 Area: " << R1.calculateArea() << endl;
  cout << "Room 1 Volume: " << R1.calculateVolume() << endl;

  cout << "\n\n";

  cout << "Room 2 Area: " << R1.calculateArea() << endl;
  cout << "Room 2 Volume: " << R1.calculateVolume() << endl;


}

// Create a class Room with room’s length, width, height as private members. Create default and parametrized constructor to initialise values, create a function to calculate area and volume of the room. Create objects of room1 & room2 and display their area and volume.
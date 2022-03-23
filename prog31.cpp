#include <iostream>
#include <cmath>
using namespace std;

struct Point {
  double x;
  double y;
};

void readPoint (Point &p) {
  string coord;
  getline(cin, coord);

  int pos = -1;

  for (int i = 0; i < coord.length(); i++) {
    if (coord[i] == ',') {
      pos = i;
      if (coord[i + 1] == ' ') pos = i + 1;
      break;
    }
  }

  p.x = stod(coord.substr(0, pos));
  p.y = stod(coord.substr(pos + 1));
}

void printCoordinate(Point p) {
  cout << p.x << ", " << p.y << endl;
}

Point getCloserCoordinate(Point p1, Point p2) {
  double distance1 = sqrt(pow(p1.x - 0, 2) + pow(p1.y - 0, 2));
  double distance2 = sqrt(pow(p2.x - 0, 2) + pow(p2.y - 0, 2));

  return distance1 < distance2 ? p1 : p2;
}

int main() {
  Point p1, p2;

  cout << "Enter first coordinate: " << endl;
  readPoint(p1);
  
  cout << "Enter second coordinate: " << endl;
  readPoint(p2);

  cout << "First Coordinate: ";
  printCoordinate(p1);

  cout << "Second Coordinate: ";
  printCoordinate(p2);

  cout << "Coordinate closer to origin is: ";
  printCoordinate(getCloserCoordinate(p1, p2));
}
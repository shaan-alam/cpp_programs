#include <iostream>
using namespace std;


class Student: public Person {
  private:
    double marks;
    string std;

  public: 
    void get_data() {
      Person::get_data();
      cout << "Enter marks: " << endl;
      cin >> marks;
    }

    void display() {
      Person::display();
      cout << "Marks: " << this->marks << endl;
    }

    void get_class() {
      cout << "Enter class: " << endl;
      cin >> this->std;
    }
};

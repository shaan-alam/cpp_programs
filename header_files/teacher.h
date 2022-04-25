#include <iostream>
#include "person.h"

using namespace std;

class Teacher: public Person {
  private:
    string department;
    double salary;
  
  public:
    void get_data() {
      Person::get_data();

      cin.ignore();

      cout << "Enter Department: " << endl;
      getline(cin, this->department);

      cout << "Enter salary: " << endl;
      cin >> this->salary;
    }

    void display() {
      Person::display();
      cout << "Department: " << this->department << endl;
      cout << "Salary: " << this->salary << endl;
    }

    void get_specialization() {
      // cout <<  << endl;
    }
    
};
 

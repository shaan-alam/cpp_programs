#include <iostream>
using namespace std;

class Person {
  protected: 
    string name;
    long phone;

  public: 
    Person() {
      this->name = "";
      this->phone = 0;
    }

    Person(string name, long ph) {
      this->name = name;
      this->phone = ph;
    }

    void display() {
      cout << "Name = " << this->name << endl;
      cout << "Phone = " << this->phone << endl;
    }
};

class Student: public Person {
  private:
    string roll;
    string school;

  public:
    Student() {
      this->roll = "";
      this->school = "";
    }

    Student(string name, long phone, string roll, string school): Person(name, phone) {
      this->roll = roll;
      this->school = school;
    }

    void display() {
      Person::display();
      cout << "Roll = " << this->roll << endl;
      cout << "School = " << this->school << endl;
    }
};


int main() {
  Student std("Shaan Alam", 6386097208, "20071582073", "Shivaji College");

  std.display();
}
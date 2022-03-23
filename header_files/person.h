#include <iostream>
using namespace std;

class Person {
  
  private:
    string name;
    int age;

  public:
    Person() {
      this->name = "";
      this->age = 0;
    }

    Person(string name, int age) {
      this->name = name;
      this->age = age;
    }

    void get_data() {
      // cin.ignore();

      cout << "Enter name: " << endl;
      getline(cin, this->name);

      cout << "Enter age: " << endl;
      cin >> this->age;
    }

    void display() {
      cout << "Name: " << this->name << endl;
      cout << "Age: " << this->age << endl;
    }

    ~Person() {
      this->name = "";
      this->age = 0;
    }
};

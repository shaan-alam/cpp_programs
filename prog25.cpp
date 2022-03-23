#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
  string name;
  int roll;
  int marks;
};

void printHeadings() {
  cout << setw(45) << "📝 RESULT\n" << endl;
  cout << setw(20) << "Name" << setw(20) << "Roll no" << setw(20) << "Marks" << endl;
  cout << "\t" << "===========================================================" << endl;
}

void printStudents(Student students[]) {
  system("clear");
  
  printHeadings();

  for (int i = 0; i < 5; i++) {
    cout << setw(20) << students[i].name << setw(20) << students[i].roll << setw(20) << students[i].marks << endl;
  }
  cout << "\t" << "===========================================================" << endl;
}

void printMaxMarks (Student student) {
  cout << "\n\tStudent details with Maximum marks 🚀 : \n" << endl;
  cout << "\tName: " << student.name << endl;
  cout << "\tRoll no: " << student.roll << endl;
  cout << "\tMarks: " << student.marks << endl;
}

int main() {
  struct Student students[5];
  int maxMarks = -1, pos = -1;

  for (int i = 0; i < 5; i++) {
    cout << "Enter Student" << i + 1 << " name: " << endl;
    cin >> students[i].name; 
    cout << "Enter Student" << i + 1 << " roll no: " << endl;
    cin >> students[i].roll; 
    cout << "Enter Student" << i + 1 << " marks: " << endl;
    cin >> students[i].marks; 

    if (students[i].marks > maxMarks) {
      maxMarks = students[i].marks;
      pos = i;
    }
  }

  printStudents(students);
  printMaxMarks(students[pos]);
}
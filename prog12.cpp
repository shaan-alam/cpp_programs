#include <iostream>
using namespace std;

char calculateGrade(int percentage) {
  if (percentage >= 90)
    return 'O';
  else if (percentage >= 75 && percentage < 90)
    return 'A';
  else if (percentage >= 60 && percentage < 75) 
    return 'B';
  else if (percentage >= 40 && percentage < 60)
    return 'C';
  else  
    return 'F';
}

int main() {
  int percentage;
  char grade;
  char choice;

  do {
    cout << "Enter percentage: " << endl;
    cin >> percentage;

    if (percentage < 0) {
      cout << "Percentage cannot be a negative number.." << endl;
    }
    else {
      grade = calculateGrade(percentage);

      cout << "Your percentage : " << percentage << endl;
      cout << "Your grade : " << grade << endl;  
    }

    cout << "\nDo you wish to continue??" << endl;
    cin >> choice;

    system("clear");

  } while (choice == 'Y' || choice == 'y');
 
  return 0;
}


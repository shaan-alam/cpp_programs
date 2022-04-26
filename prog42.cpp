#include <iostream>
#include <fstream>
 
using namespace std;
 
int main() {
    fstream f;
    f.open("sample_text.txt", ios::out);
 
    if (!f) {
        cout << "Error in opening file!";
        return 0;
    }
    cout << "***************" << endl;
    cout << "Enter data for the text file below" << endl;
    cout << "End the data using $ symbol, on new line" << endl;
    cout << "***************" << endl;
 
    string line;
    while(true) {
        getline(cin, line);
        if (line == "$") {
            break;
        }
        f << line << endl;
    }
    cout << "---------------" << endl;
 
    f.close();
 
    int line_count = 0;
    f.open("sample_text.txt", ios::in);
    while (f) {
        getline(f, line);
        line_count += 1;
    }
 
    cout << "Number of lines: " << line_count;
 
    f.close();
    return 0;
}

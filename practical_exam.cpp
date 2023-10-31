#include <iostream>
using namespace std;

const int num_s = 2;

// Function to input student data as strings
void input(string names[], int status[]) {
  for (int i = 0; i < num_s; i++) {
    cout << "Enter name of student " << i + 1 << ": ";
    cin >> names[i];

    cout << "Enter pass status (1 for pass, 0 for fail) for " << names[i] << ": ";
    cin >> status[i];
  }
}

// Overloaded function to input student data as integers
void input(int names[], int status[]) {
  for (int i = 0; i < num_s; i++) {
    cout << "Enter ID of student " << i + 1 << ": ";
    cin >> names[i];

    cout << "Enter pass status (1 for pass, 0 for fail) for student with ID " << names[i] << ": ";
    cin >> status[i];
  }
}

// Overloaded function to concatenate two student names
string operator+(const string& name1, const string& name2) {
  return name1 + " " + name2;
}

// Function to display student data
void display(const string names[], const int status[]) {
  int p_count = 0;
  int f_count = 0;

  cout << "Student Summary:" << endl;
  for (int i = 0; i < num_s; i++) {
    cout << "Name: " << names[i] << ", Status: ";
    if (status[i] == 1) {
      cout << "Pass" << endl;
      p_count++;
    } else if (status[i] == 0) {
      cout << "Fail" << endl;
      f_count++;
    }
  }

  cout << "Number of Pass Candidates: " << p_count << endl;
  cout << "Number of Fail Candidates: " << f_count << endl;
}

int main() {
  string names_str[num_s];
  int status_str[num_s];
  input(names_str, status_str);

  // Display student data using the overloaded `+` operator
  cout << "Student Names:" << endl;
  for (int i = 0; i < num_s; i++) {
    cout << names_str[i] + " (Pass Status: " << status_str[i] << ")" << endl;
  }

  return 0;
}

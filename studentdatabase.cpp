#include <iostream>
#include <vector>

using namespace std;

struct Student {
    int adminno;
    string firstname;
    string lastname;
    float gpa;
};

vector<Student> students;

void addStudent(string first, string last, float gpa) {
    int admin = students.size() + 1;
    Student s = {admin, first, last, gpa};
    students.push_back(s);
}

void findTopGrade() {
    if (students.empty()) {
        cout << "No students available.\n";
        return;
    }

    Student top = students[0];  // initialize with first student

    for (Student& p : students) {
        if (p.gpa > top.gpa) {
            top = p;
        }
    }

    cout << "Top student is: "
         << top.firstname << " " << top.lastname
         << " (Admin No. " << top.adminno << ")"
         << " with GPA: " << top.gpa << endl;
}

int main() {
    while (true) {
        int input;
        cout << "\nChoose an option:\n";
        cout << "1. Add student\n";
        cout << "2. Check top student\n";
        cout << "0. Exit\n";
        cout << ">> ";

        cin >> input;

        if (!cin) {
            cout << "Invalid input\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if (input == 1) {
            string first, last;
            float gpa;

            cout << "Enter first name: ";
            cin >> first;
            cout << "Enter last name: ";
            cin >> last;
            cout << "Enter GPA: ";
            cin >> gpa;

            addStudent(first, last, gpa);

        } else if (input == 2) {
            findTopGrade();

        } else if (input == 0) {
            break;

        } else {
            cout << "Invalid option\n";
        }
    }
}

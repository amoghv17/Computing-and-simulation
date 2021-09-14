//
// Created by 18649 on 9/13/2021.
/*    Student List (OOP)

    Example of using vectors to store a list of students and their GPAs.

*/
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int studentID;
    double GPA;
};

void printStudents(vector<Student> students) {
    for(int i=0;i<students.size();i++)
    {
        cout<< students[i].firstName<<" ,"<<students[i].lastName<<","<< students[i].GPA<<endl;
    }
};

vector<Student> addStudent(vector<Student> students) {

    Student newStudent;

    cout << "First Name: ";
    cin >> newStudent.firstName;
    cout << "Last Name: ";
    cin >> newStudent.lastName;
    cout << "ID: ";
    cin >> newStudent.studentID;
    cout << "GPA: ";
    cin >> newStudent.GPA;

    students.push_back(newStudent);

    return students;
}

vector<Student> delStudent(vector<Student> students) {
    int studentIDtoDel;
    cout << "ID of student to delete: ";
    cin >> studentIDtoDel;

    cout << "ID to delete: " << studentIDtoDel << endl;

    vector<Student> newStudents;
    for (int n = 0; n < students.size(); n++) {
        if (students[n].studentID != studentIDtoDel) {
            newStudents.push_back(students[n]);

        } else {
        }
    }
        return newStudents;
    }


    int main() {
        vector<Student> students;
        string input;

        while (true) {
            cout << "Input operation: ";
            cin >> input;

            if (input == "ADD" || input == "a" || input == "add") {
                students = addStudent(students);
            } else if (input == "PRINT" || input == "p" || input == "print") {
                printStudents(students);
            } else if (input == "DELETE" || input == "d" || input == "delete") {
                students = delStudent(students);
            } else if (input == "QUIT" || input == "q" || input == "quit") {
                return 0;
            }
        }
    }




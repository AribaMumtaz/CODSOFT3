#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> studentNames;
    vector<double> studentGrades;

    int numStudents;

    cout <<"\n\t Enter the number of students: ";
    cin >> numStudents;

    // Input student names and grades
    for (int i = 0; i < numStudents; i++) {
        string name;
        char grade;

        cout << "\n\t\tEnter the name of student " << i + 1 << ": ";
        cin >> name;
        studentNames.push_back(name);

        cout << "\t\tEnter the grade for " << name << ": ";
        cin >> grade;
        studentGrades.push_back(grade);
    }

    // Calculate the average, highest, and lowest grades
    double totalGrade = 0.0;
    double highestGrade = studentGrades[0];
    double lowestGrade = studentGrades[0];

    for (int i = 0; i < numStudents; i++) {
        totalGrade += studentGrades[i];

        if (studentGrades[i] > highestGrade) {
            highestGrade = studentGrades[i];
        }

        if (studentGrades[i] < lowestGrade) {
            lowestGrade = studentGrades[i];
        }
    }

    double averageGrade = totalGrade / numStudents;

    // Display results
       cout <<"\n\t\t";
    cout << "Average Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}
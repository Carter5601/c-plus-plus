#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Student {
public:
    Student(string name = "not initialized", double gpa = 0.0);
    void SetName(string studentName);
    void SetGPA(double newGPA);
    string ToString() const;
private:
    string name;
    double gpa;
};

Student::Student(string initialName, double initialGPA) {
    name = initialName;
    gpa = initialGPA;
}

void Student::SetName(string inputName) {
    name = inputName;
}

void Student::SetGPA(double newGPA) {
    gpa = newGPA;
}

string Student::ToString() const {
    cout << name << " has a GPA of ";
    return to_string(gpa);
}

int main() {
    vector<Student*> students;

    bool continueMenuLoop = true;
    while (continueMenuLoop) {
        string userInput;
        cout << "Enter Option:" << endl;
        cin >> userInput;

        if (userInput == "add") {
            string userName;
            double studentGpa;
            cout << "Student name: " << endl;
            cin >> userName;
            cout << userName << "'s GPA:" << endl;
            cin >> studentGpa;
            cout << endl;

            Student* studentNew = new Student(userName, studentGpa);
            students.push_back(studentNew);
        }
        else if (userInput == "drop") {
            cout << "Index of student to drop: " << endl << endl;
            int studentIndex;
            cin >> studentIndex;
            delete students.at(studentIndex);
            students.erase(students.begin() + studentIndex);
        }
        else if (userInput == "print") {
            for (int i = 0; i < students.size(); ++i) {
                cout << i << ": " << students.at(i)->ToString() << endl;
            }
        }
        else if (userInput == "quit") {
            continueMenuLoop = false;
        }
    }

    return 0;
}



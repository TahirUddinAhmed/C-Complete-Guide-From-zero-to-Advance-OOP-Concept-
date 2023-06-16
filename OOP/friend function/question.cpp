#include <iostream>
using namespace std;

class marks; // forward declaration

class Student {
private:
    string name;
    int roll;

public:
    Student(string name, int roll) {
        this->name = name;
        this->roll = roll;
    }

    friend void stDetails(Student& s, marks& m);
};

class marks {
private:
    int sub[5];

public:
    void setSub() {
        for (int i = 0; i < 5; i++) {
            cout << "Enter mark for subject " << i + 1 << ": ";
            cin >> sub[i];
        }
    }

    friend void stDetails(Student& s, marks& m);
};

void stDetails(Student& s, marks& m) {
    int totalMarks = 0;
    cout << "---Student details---" << endl;
    cout << "Name: " << s.name << "\nRoll: " << s.roll << endl;
    for (int i = 0; i < 5; i++) {
        totalMarks += m.sub[i];
    }

    cout << "Total marks: " << totalMarks << endl;
}

int main() {
    Student s1("Tahir", 17);
    marks m1;
    m1.setSub();

    stDetails(s1, m1);
    return 0;
}
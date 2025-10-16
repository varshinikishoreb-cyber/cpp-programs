#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;                     
    static string collegeName;          

public:
    Student(int r) {
        rollNo = r;
    }

    void display() const {
        cout << "Roll No: " << rollNo << ", College: " << collegeName << endl;
    }

    static void setCollegeName(string name) {
        collegeName = name;
    }
};

string Student::collegeName = "Not Set";

int main() {

    Student::setCollegeName("ABC College");

    Student s1(1);
    Student s2(2);

    cout << "Before changing college name\n";
    s1.display();
    s2.display();

    Student::setCollegeName("XYZ University");

    cout << "\nAfter changing college name\n";
    s1.display();
    s2.display();

    Student s3(3);
    s3.display();

    return 0;
}

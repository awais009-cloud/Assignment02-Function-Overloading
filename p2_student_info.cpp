#include<iostream>
#include<string>
using namespace std;
void printInfo(string name) {
    cout << "Name: " << name << endl;
}

void printInfo(string name, int rollNo) {
    cout << "Name: " << name
         << " | Roll No: " << rollNo << endl;
}

void printInfo(int rollNo, string name) {
    cout << "Roll No: " << rollNo
         << " | Name: " << name << endl;
}

void printInfo(string name, double cgpa) {
    cout << "Name: " << name
         << " | CGPA: " << cgpa << endl;
}

void printInfo(char grade) {
    cout << "Grade: " << grade << endl;
}

int main() {
    printInfo("Ali");
    printInfo("Ali", 12);
    printInfo(12, "Ali");
    printInfo("Ali", 3.5);
    printInfo('A');
    printInfo("Sara", 'B');
    return 0;
}
// printInfo("Sara", 'B') calls printInfo(string, int)
// because char 'B' is converted to its integer ASCII value 66.

// Adding int printInfo(char grade) causes a compile error
// because the return type alone cannot distinguish overloaded functions.
// The parameter list must be different.

// Two functions cannot be overloaded by changing only
// the order of parameters if their parameter types remain identical.
// However, string and int in different orders are valid overloads.
#include <iostream>
#include <string>

using namespace std;

class Student {

    private:
        string name;
        int ID;
        double grade;
    public:
        Student(string s_name, int s_ID, double s_grade);
        Student();

    string get_name() {return name;}
    int get_ID() {return ID;}
    double get_grade() {return grade;}

    void set_name(string new_name) {name = new_name;}
    void set_grade(double new_grade) {grade = new_grade;}

};

Student::Student(string s_name, int s_ID, double s_grade)
{
    name=s_name;
    ID=s_ID;
    grade=s_grade;
}

Student::Student(): name("Placeholder"), ID(0), grade(0) {
    cout << "An object of class Student was created\n";
}
/*
C12_IE1 Assignment
By Wakeland Branz
*/

/*

    Write a class named Employee that has the following member variables:

    name—a string that holds the employee’s name
    idNumber—a n int variable that holds the employee’s ID number
    department—a string that holds the name of the department where the employee works
    position—a string that holds the employee’s job title

    The class should have the following constructors:

    A constructor that accepts the following values as arguments and assigns them to the appropriate member variables: employee’s name, employee’s ID 
    number, department, and position.
    A constructor that accepts the following values as arguments and assigns them to the appropriate member variables: employee’s name and ID number. 
    The department and position fields should be assigned an empty string ("").
    A default constructor that assigns empty strings ("") to the name, department, and position member variables, and 0 to the idNumber member variable.

    Write appropriate mutator functions that store values in these member variables and accessor functions that return the values in these member variables.
    Once you have written the class, write a separate program that creates three Employee objects to hold the following data:

    The program should store this data in the three objects and then display the data for each employee on the screen.

*/

using namespace std;
#include<iostream>
#include<string>

class Employee {
private:
    std::string name;
    int idNumber;
    std::string department;
    std::string position;

public: 
    // Constructors
    Employee(std::string empName, int empId, std::string dept, std::string pos) {
        name = empName;
        idNumber = empId;
        department = dept;
        position = pos;
    }

    Employee(std::string empName, int empId) {
        name = empName;
        idNumber = empId;
        department = "";
        position = "";
    }

    ~Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    // Mutators (setters)
    void setName(string empName) {
        name = empName;
    }

    void setIdNumber(int empId) {
        idNumber = empId;
    }

    void setDepartment(string dept) {
        department = dept;
    }

    void setPosition(string pos) {
        position = pos;
    }

    // Accessors (getters)
    string getName() const {
        return name;
    }

    int getIdNumber() const {
        return idNumber;
    }

    string getDepartment() const {
        return department;
    }

    string getPosition() const {
        return position;
    }
};

int employeeMain() {
    // Create three Employee objects
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee emp2("Mark Jones", 39119, "IT", "Programmer");
    Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    // Display the data for each employee
    cout << "Employee 1:" << endl;
    cout << "Name: " << emp1.getName() << endl;
    cout << "ID Number: " << emp1.getIdNumber() << endl;
    cout << "Department: " << emp1.getDepartment() << endl;
    cout << "Position: " << emp1.getPosition() << endl << endl;

    cout << "Employee 2:" << endl;
    cout << "Name: " << emp2.getName() << endl;
    cout << "ID Number: " << emp2.getIdNumber() << endl;
    cout << "Department: " << emp2.getDepartment() << endl;
    cout << "Position: " << emp2.getPosition() << endl << endl;

    cout << "Employee 3:" << endl;
    cout << "Name: " << emp3.getName() << endl;
    cout << "ID Number: " << emp3.getIdNumber() << endl;
    cout << "Department: " << emp3.getDepartment() << endl;
    cout << "Position: " << emp3.getPosition() << endl;

    return 0;
}
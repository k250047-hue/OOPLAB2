#include <iostream>
#include "Employee.h"
using namespace std;

void Employee::get_data() {
    cout << "Enter employee name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter monthly salary: ";
    cin >> salary;

    cout << "Enter tax percentage: ";
    cin >> tax_percentage;
}

double Employee::Salary_after_tax() {
    double tax = salary * (tax_percentage / 100);
    return salary - tax;
}

void Employee::update_tax_percentage(double new_tax) {
    tax_percentage = new_tax;
    cout << "Updated tax percentage: " << tax_percentage << "%" << endl;
    cout << "Salary after updated tax: " << Salary_after_tax() << endl;
}

void Employee::display() {
    cout << "Employee Name: " << name << endl;
    cout << "Original Salary: " << salary << endl;
    cout << "Salary after tax: " << Salary_after_tax() << endl;
}
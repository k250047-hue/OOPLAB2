#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    double tax_percentage;

public:
    void get_data() {
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter monthly salary: ";
        cin >> salary;

        cout << "Enter tax percentage: ";
        cin >> tax_percentage;
    }

    double Salary_after_tax() {
        double tax = salary * (tax_percentage / 100);
        return salary - tax;
    }

    void update_tax_percentage(double new_tax) {
        tax_percentage = new_tax;
        cout << "Updated tax percentage: " << tax_percentage << "%" << endl;
        cout << "Salary after updated tax: " << Salary_after_tax() << endl;
    }

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Original Salary: " << salary << endl;
        cout << "Salary after tax: " << Salary_after_tax() << endl;
    }
};

int main() {
    Employee e;
    
    e.get_data();
    cout << endl;

    e.display();
    cout << endl;

    e.update_tax_percentage(3);

    return 0;
}
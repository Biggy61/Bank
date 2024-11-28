//
// Created by stepa on 11/28/2024.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee {
public:
    string Name;
    float YearlySalary;
    string Department;

    Employee(string name, float yearly_salary,string department);
    Employee();
    float CalculateMonthlySalary();
    void DisplayInformation();

};



#endif //EMPLOYEE_H
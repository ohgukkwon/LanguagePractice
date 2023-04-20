#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    float annualSalary;
    string annual;
    cout << "Enter your annual salary: ";
    cin >> annualSalary;
    cout << "Enter test annual char: ";
    cin >> annual;
    cout << "test annual string: " << annual << endl;
    cout << "" << endl;
    cout << "Your monthly salary is " << annualSalary/12 << endl;
    cout << "Your weekly salary is " << annualSalary/52 << endl;
    cout << "In 10 years you will earn " << annualSalary*10 << endl;
    system("pause");
}
#include <iostream>

using namespace std;

int main()
{
    string name, city, country;
    short age;
    float monthly_salary;
    unsigned char gender;
    bool is_married;

    cout << "enter your name \n"
         << endl;
    cin >> name;

    cout << "enter your age \n"
         << endl;
    cin >> age;

    cout << "enter your city \n"
         << endl;
    cin >> city;

    cout << "enter your country \n"
         << endl;
    cin >> country;

    cout << "enter your monthly salary \n"
         << endl;
    cin >> monthly_salary;

    cout << "enter your gender \n"
         << endl;
    cin >> gender;

    cout << "enter your marital state \n"
         << endl;
    cin >> is_married;

    cout << "\n\n************************\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly Salary: " << monthly_salary << endl;
    cout << "Yearly Salary: " << monthly_salary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << is_married << endl;

    cout << "************************\n\n\n\n";

    int x , y ;
        cout << "enter x \n"
         << endl;
    cin >> x;
     cout << "enter y \n"
         << endl;
    cin >> y;

    cout << "x: " << x << "\ny: " << y << endl;
    cout << "x + y : " << x + y << endl;

    cout << "After 5 years you will be: " << age + 5 << " years old" << endl;

    return 0;
}
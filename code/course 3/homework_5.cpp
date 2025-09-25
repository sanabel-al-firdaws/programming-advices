#include <iostream>
#include <cmath>

using namespace std;

enum enGender
{
    M = 109,
    F = 102
};

struct stInfo
{
    string name;
    string country;
    string city;
    short age;
    float monthly_salary;
    char enGender;
    bool is_married;
};

void ReadInfo(stInfo &User)
{

    cout << "enter your name \n"
         << endl;
    cin.ignore(0, '\n');
    getline(cin, User.name);

    cout << "enter your age \n"
         << endl;
    cin >> User.age;

    cout << "enter your country \n"
         << endl;
    cin >> User.country;

    cout << "enter your city \n"
         << endl;
    cin >> User.city;

    cout << "enter your monthly salary \n"
         << endl;
    cin >> User.monthly_salary;

    cout << "enter your gender \n"
         << endl;
    cin >> User.enGender;

    cout << "enter your marital state \n"
         << endl;
    cin >> User.is_married;
}

void PrintInfo(stInfo User)
{

    cout << "\n\n************************\n";
    cout << "Name: " << User.name << endl;
    cout << "Age: " << User.age << endl;
    cout << "Country: " << User.country << endl;
    cout << "City: " << User.city << endl;
    cout << "Monthly Salary: " << User.monthly_salary << endl;
    cout << "Yearly Salary: " << User.monthly_salary * 12 << endl;
    cout << "Gender: " << User.enGender << endl;

    if (User.is_married == 0)
    {
        cout << "Marital State: " << "Single" << endl;
    }
    else
    {
        cout << "Marital State: " << "Married" << endl;
    };

    cout << "************************\n\n\n\n";
}

int main()
{
    stInfo User;
    ReadInfo(User);
    PrintInfo(User);

    return 0;
}

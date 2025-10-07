#include <iostream>
#include <cmath>
using namespace std;

//? #46
// void PrinttLettersInRange(char from, char to)
// {

//     for (float i = from; i <= to; i++)
//     {

//         cout << char(i) << endl;
//     }
// }
//? #46

//? #47

// float ReadPositiveNumber(string message)
// {

//     float number = 0;

//     while (number < 1)
//     {

//         cout << message << endl;

//         cin >> number;
//     }
//     cout << endl;
//     return number;
// }
// float TotalMonths(float loanAmount, float monthlyInstalments)
// {
//     return (float)loanAmount / monthlyInstalments;
// }

//? #47

//? #48

// float ReadPositiveNumber(string message)
// {

//     float number = 0;

//     while (number < 1)
//     {

//         cout << message << endl;

//         cin >> number;
//     }
//     cout << endl;
//     return number;
// }
// float MonthlyInstalments(float loanAmount, float howManyMonths)
// {
//     return (float)loanAmount / howManyMonths;
// }

//? #48

//? #49
// float ReadNumber(string message)
// {

//     float number = 0;

//     do
//     {

//         cout << message << endl;

//         cin >> number;

//     }

//     while (number != 1234);
//     return number;
// }

// bool CheckPin(int Pin)
// {
//     if (Pin == 1234)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// bool LoggedIn()
// {
//     int Pin = ReadNumber("Enter Your Pin");

//     bool result = CheckPin(Pin);

//     if (result)
//     {
//         return true;
//     }
//     else
//     {
//         system("color 2F"); // turn screen color to green

//         cout << "Wrong Pin";
//         return false;
//     }
// }
//? #49

//? #50
string ReadPinNumber(string message)
{

    float number = 0;

    for (int i = 1; i < 4; i++)
    {
        cout << message << endl;

        cin >> number;
        if (number == 1234 && i < 4)
        {
            return "Your Balance is 7500$";
        }
        else if (i < 4)
        {
            cout << "Wrong Pin" << endl;
        }
        else
        {
            return "This Card Is Locked";
        }
    }
    return "This Card Is Locked";
}
//? #50 

int main()
{

    //? #46

    // PrinttLettersInRange('A', 'Z');

    //? #46

    //? #47
    // float loanAmount = ReadPositiveNumber("Enter Loan Amount");
    // float monthlyAmount = ReadPositiveNumber("Enter Monthly Amount");

    // cout << "You Will Pay The Loan in " << TotalMonths(loanAmount, monthlyAmount) << " months" << endl;
    //? #47

    //? #48

    // float loanAmount = ReadPositiveNumber("Enter Loan Amount");
    // float howManyMonths = ReadPositiveNumber("After How Many Months Are You Going To Pay ?");

    // cout << "You Will Pay " << MonthlyInstalments(loanAmount, howManyMonths) << "$ each month" << endl;

    //? #48

    //? #49

    // if (LoggedIn())
    // {
    //     system("color 2F"); // turn screen color to green
    //     cout << "Your Balance is 7500$" << endl;
    // }

    //? #49

    //? #50

    cout << ReadPinNumber("Enter Your Pin") << endl;

    //? #50
    return 0;
}

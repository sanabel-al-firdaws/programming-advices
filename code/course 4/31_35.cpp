#include <iostream>
#include <cmath>
using namespace std;
//? #31

// int ReadNumber(string message)
// {
//     int number = 0;
//     cout << message << endl;

//     cin >> number;
//     return number;
// }

// int Power(int number, int power)
// {

//  //? added lines same performance  if (power == 0)
//  //? added lines same performance  {
//  //? added lines same performance      return 1;
//  //? added lines same performance  }
//     int sum = 1;
//     for (int i = 1; i <= power; i++)
//     {
//         sum *= number;
//     }

//     return sum;
// }

// void PrintResult(int number)
// {
//     cout << "the result is " << number << endl;
// }

//? #31

//? #32

//! same as exercise #31

//? #32

//? #33

// int ReadNumberInRange(string message, int from, int to)
// {
//     int number = 0;

//     do
//     {

//         cout << message << endl;

//         cin >> number;

//     } while (number < from || number > to);

//     return number;
// }

// char GetGradeLetter(int grade)
// {
//     if (grade >= 90)
//     {
//         return 'A';
//     }
//     else if (grade >= 80)
//     {
//         return 'B';
//     }
//     else if (grade >= 70)
//     {
//         return 'C';
//     }
//     else if (grade >= 60)
//     {
//         return 'D';
//     }
//     else if (grade >= 50)
//     {
//         return 'E';
//     }
//     else
//     {
//         return 'F';
//     }
// }

// void PrintResult(char mark)
// {

//     cout << "You got a " << mark << endl;
// }
//? #33

//? #34

// float ReadNumber(string message)
// {
//     float number = 0;

//     cout << message << endl;

//     cin >> number;

//     return number;
// }

// float GetCommissionPercentage(float sales)
// {
//     if (sales >= 1000000)
//     {
//         return 0.01;
//     }
//     else if (sales >= 500000)
//     {
//         return 0.02;
//     }
//     else if (sales >= 100000)
//     {
//         return 0.03;
//     }
//     else if (sales >= 50000)
//     {
//         return 0.05;
//     }
//     else
//     {
//         return 0;
//     }
// }

// float CalculateTotalCommission(float totalSales)
// {

//     return totalSales * GetCommissionPercentage(totalSales);
// }
// void PrintResult(string message, float value)
// {

//     cout << message << value << endl;
// }

//? #34

//? #35

struct stBankContent
{
    int Pennies, Nickles, Dimes, Quarters, Dollars;
};
float ReadNumber(string message)
{
    float number = 0;

    cout << message << endl;

    cin >> number;

    return number;
}
int TotalPennies(stBankContent bank)
{
    float result = bank.Pennies + bank.Nickles * 5 + bank.Dimes * 10 + bank.Quarters * 25 + bank.Dollars * 100;
    return result;
}
float TotalDollars(float pennnies)
{
    return pennnies * 0.01;
}
void PrintResult(string message, float value)
{

    cout << message << value << endl;
}
//? #35

int main()
{

    //? #31
    // int number = ReadNumber("Enter a Number");

    // int power = ReadNumber("Enter the Power Number");

    // PrintResult(Power(number, power));

    //? #31

    //? #32

    //! same as exercise #31

    //? #32

    //? #33

    // PrintResult(GetGradeLetter(ReadNumberInRange("Enter Your Grade", 0, 100)));

    //? #33

    //? #34
    // int totalSales = ReadNumber("Enter The Total Sales");

    // PrintResult("Commision Percentage is : ", GetCommissionPercentage(totalSales));
    // PrintResult("Total Commision is : ", CalculateTotalCommission(totalSales));

    //? #34

    //? #35

    stBankContent bank;

    bank.Pennies = ReadNumber("Enter Pennies");
    bank.Nickles = ReadNumber("Enter Nickles");
    bank.Dimes = ReadNumber("Enter Dimes");
    bank.Quarters = ReadNumber("Enter Quarters");
    bank.Dollars = ReadNumber("Enter Dollars");

    int Total_Pennies = TotalPennies(bank);
    PrintResult("Total Pennies is : ", Total_Pennies);

    float Total_Dollars = TotalDollars(Total_Pennies);

    PrintResult("Total Dollars is : ", Total_Dollars);

    //? #35
    return 0;
}

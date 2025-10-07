#include <iostream>
#include <cmath>
using namespace std;

//? #36

// enum enOperation
// {
//     Add = '+',
//     Subtract = '-',
//     Multiply = '*',
//     Divide = '/'
// };

// int ReadNumber(string message)
// {
//     int number = 0;

//     cout << message << endl;

//     cin >> number;

//     return number;
// }
// enOperation ReadOperation(string message)
// {
//     char operation = '+';

//     cout << message << endl;

//     cin >> operation;

//     return (enOperation)operation;
// }
// void CalculateNumbers(int numbers[2], enOperation operation)
// {

//     switch (operation)
//     {
//     case enOperation::Add:
//         cout << numbers[0] << " + " << numbers[1] << " = " << numbers[0] + numbers[1] << endl;
//         break;

//     case enOperation::Subtract:
//         cout << numbers[0] << " - " << numbers[1] << " = " << numbers[0] - numbers[1] << endl;
//         break;

//     case enOperation::Multiply:
//         cout << numbers[0] << " * " << numbers[1] << " = " << numbers[0] * numbers[1] << endl;
//         break;
//     case enOperation::Divide:
//         cout << numbers[0] << " / " << numbers[1] << " = " << numbers[0] / numbers[1] << endl;
//         break;

//     default:
//         cout << numbers[0] << " + " << numbers[1] << " = " << numbers[0] + numbers[1] << endl;
//         break;
//     }
// }
//? #36

//? #37

// int ReadNumber(string message)
// {
//     int number = 0;

//     cout << message << endl;

//     cin >> number;

//     return number;
// }

// int ReadNumberUntill()
// {
//     int number = 0;
//     int sum = 0;
//     int counter = 1;
//     do
//     {
//         number = ReadNumber("Enter Number " + to_string(counter));
//         if (number == -99)
//             break;
//         sum += number;
//         counter++;
//     } while (number != -99);

//     cout << "the number -99 was entered! " << endl;

//     return sum;
// }

// void PrintResult(int number)
// {
//     cout << "the sum of the numbers is : " << number << endl;
// }

//? #37

//? #38

// enum enPrimeNotPrime
// {
//     Prime = 1,
//     NotPrime = 2,

// };
// int ReadPositiveNumber(string message)
// {

//     int number = 0;

//     while (number < 1)
//     {

//         cout << message << endl;

//         cin >> number;
//     }
//     return number;
// }

// enPrimeNotPrime IsPrimeNumber(int number)
// {
//     int M = round(number / 2);

//     // A prime number must be greater than 1.
//     if (number < 2)
//         return enPrimeNotPrime::NotPrime;

//     for (int i = 2; i <= M; i++)
//     {

//         if (number % i == 0)

//             return enPrimeNotPrime::NotPrime;
//     }
//     return enPrimeNotPrime::Prime;
// }

// void PrintNumberType(int number)
// {

//     if (IsPrimeNumber(number) == enPrimeNotPrime::Prime)
//     {
//         cout << "The Number " << number << " Is Prime" << endl;
//     }
//     else
//     {
//         cout << "The Number " << number << " Is Not Prime" << endl;
//     }
// }

//? #38

//? #39
// int ReadPositiveNumber(string message)
// {

//     int number = 0;

//     while (number < 1)
//     {

//         cout << message << endl;

//         cin >> number;
//     }
//     return number;
// }
// float CalculateRemainder(float cashPaid, float totalBill)
// {
//     return cashPaid - totalBill;
// }

// void PrintInvoice(float cashPaid, float totalBill)
// {

//     cout << "Total Bill = " << totalBill << endl;
//     cout << "Cash Paid = " << cashPaid << endl;
//     cout << "************"  << endl;

//     string result = "Remainder = " + to_string(CalculateRemainder(cashPaid, totalBill));
//     cout << result << endl;
// }
//? #39

//? #40

int ReadPositiveNumber(string message)
{

    int number = 0;

    while (number < 1)
    {

        cout << message << endl;

        cin >> number;
    }
    return number;
}
float CalculateFee(float bill)
{
    return bill * 0.10;
}
float CalculateTax(float bill)
{
    return bill * 0.16;
}
void PrintInvoice(float bill)
{
    float fee = CalculateFee(bill);

    float tax = CalculateTax(bill + fee);

    float totalBill = bill + tax + fee;
    string result = "Total Bil = " + to_string(bill) + " (billvalue) + " + to_string(tax) + " (tax) + " + to_string(fee) + " (fee) = " + to_string(totalBill);
    cout << result << endl;
}

//? #40

int main()
{

    //? #36
    // int numbers[2];
    // numbers[0] = ReadNumber("enter number 1");
    // numbers[1] = ReadNumber("enter number 2");

    // enOperation operation = ReadOperation("(+) Add \n\n(-) Subtract\n\n(*) Multiply\n\n(/) Divide");

    // CalculateNumbers(numbers, operation);

    //? #36

    //? #37

    // PrintResult(ReadNumberUntill());

    //? #37

    //? #38

    // int number = ReadPositiveNumber("Enter a Number");
    // PrintNumberType(number);

    //? #38

    //? #39
    // float cashPaid = ReadPositiveNumber("Enter the Cash that was paid");
    // float totalBill = ReadPositiveNumber("Enter Total bill");
    // PrintInvoice(cashPaid, totalBill);

    //? #39

    //? #40
    float totalBill = ReadPositiveNumber("Enter The Total Bill");
    PrintInvoice(totalBill);

    //? #40
    return 0;
}

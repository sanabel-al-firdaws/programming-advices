#include <iostream>
#include <cmath>
using namespace std;

//? #26

// int ReadNumber()
// {
//     int number = 0;
//     cout << "enter a number " << endl;
//     cin >> number;
//     return number;
// }
// void PrintFrom1ToN(int number)
// {

//     for (int i = 1; i <= number; i++)
//     {
//         cout << i << endl;
//     }
// }
//? #26

//? #27

// int ReadNumber()
// {
//     int number = 0;
//     cout << "enter a number " << endl;
//     cin >> number;
//     return number;
// }
// void PrintFromNTo1(int number)
// {

//     for (int i = number; i >= 1; i--)
//     {
//         cout << i << endl;
//     }
// }
//? #27

//? #28

// enum enOddOrEven
// {
//     Odd = 1,
//     Even = 2
// };

// enOddOrEven CheckOddOrEven(int number)
// {
//     if (number % 2 == 0)
//     {
//         return enOddOrEven::Even;
//     }
//     else
//     {
//         return enOddOrEven::Odd;
//     }
// }
// int ReadNumber()
// {
//     int number = 0;
//     cout << "enter a number " << endl;
//     cin >> number;
//     return number;
// }
// void PrintSumOddNumbersFrom1toN(int number)
// {

//     for (int i = 1, sum = 0; i <= number; i++)
//     {
//         if (CheckOddOrEven(i) == enOddOrEven::Odd)
//         {
//             cout << "sum = " << sum << " + " << i << endl;
//             sum += i;
//             cout << "sum = " << sum << endl;
//         }
//        }
// }

//? #28

//? #29
// enum enOddOrEven
// {
//     Odd = 1,
//     Even = 2
// };

// enOddOrEven CheckOddOrEven(int number)
// {
//     if (number % 2 == 0)
//     {
//         return enOddOrEven::Even;
//     }
//     else
//     {
//         return enOddOrEven::Odd;
//     }
// }
// int ReadNumber()
// {
//     int number = 0;
//     cout << "enter a number " << endl;
//     cin >> number;
//     return number;
// }
// void PrintSumEvenNumbersFrom1toN(int number)
// {

//     for (int i = 1, sum = 0; i <= number; i++)
//     {
//         if (CheckOddOrEven(i) == enOddOrEven::Even)
//         {
//             cout << "sum = " << sum << " + " << i << endl;
//             sum += i;
//             cout << "sum = " << sum << endl;
//         }
//     }
// }
//? #29

//? #30

float ReadNumber()
{
    int number = 0;

    cin >> number;

    return number;
}

int ReadUntilNumberIsPositive(string message)
{
    int number = 0;
    do
    {

        cout << message << endl;

        number = ReadNumber();
    } while (number <= 0);

    return number;
}

void PrintNFactorial(int number)
{
    int f = 1;

    for (int i = number; i >= 1; i--)
    {

        cout << f * i << "= " << f << " * " << i << endl;
        f *= i;
    }

    cout << "factorial of " << number << " = " << f << endl;
}

//? #30

int main()
{

    //? #26

    // PrintFrom1ToN(ReadNumber());

    //? #26

    //? #27

    // PrintFromNTo1(ReadNumber());

    //? #27

    //? #28

    // PrintSumOddNumbersFrom1toN(ReadNumber());

    //? #28

    //? #29

    // PrintSumEvenNumbersFrom1toN(ReadNumber());

    //? #29

    //? #30

    PrintNFactorial(ReadUntilNumberIsPositive("Enter a Positive Number"));

    //? #30
    return 0;
}

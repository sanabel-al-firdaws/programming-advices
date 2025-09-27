#include <iostream>
using namespace std;

//? #11

// enum enPassFail
// {
//     Pass = 1,
//     Fail = 2
// };

// int ReadMark()
// {
//     int number;

//     cout << "Enter a Your Mark " << endl;

//     cin >> number;

//     return number;
// }

// void ReadMarks(int marks[3])
// {

//     marks[0] = ReadMark();
//     marks[1] = ReadMark();
//     marks[2] = ReadMark();
// }

// float CalculateMarks(int marks[3])
// {
//     float average = (marks[0] + marks[1] + marks[2]) / 3;

//     return average;
// }

// enPassFail CheckAverage(float average)
// {
//     if (average >= 50)
//         return enPassFail::Pass;
//     else
//         return enPassFail::Fail;
// }

// void PrintMarks(int marks[3])
// {
//     float average = CalculateMarks(marks);

//     if (CheckAverage(average) == enPassFail::Pass)
//         cout << "You Have Passed !\n\nyour average is " << average << endl;
//     else
//         cout << "You Have Failed !\n\nyour average is " << average << endl;
// }

//? #11

//? #12
// void ReadTwoNumbers(int &number1, int &number2)
// {
//     cout << "enter number 1" << endl;
//     cin >> number1;
//     cout << "enter number 2" << endl;
//     cin >> number2;
// }

// int MaxOfTwoNumbers(int number1, int number2)
// {
//     if (number1 > number2)
//         return number1;
//     else
//         return number2;
// }

// void PrintMaxOfTwoNumbers(int max)
// {
//     string result = "the max of the two numbders is : " + to_string(max);
//     cout << result << endl;
// }
//? #12

//? #13
// void ReadNumbers(int numbers[3])
// {
//     cout << "enter number 1" << endl;
//     cin >> numbers[0];
//     cout << "enter number 2" << endl;
//     cin >> numbers[1];
//     cout << "enter number 3" << endl;
//     cin >> numbers[2];
// }

// int MaxOfNumbers(int numbers[3])
// {
//     if (numbers[0] > numbers[1])
//         if (numbers[0] > numbers[2])
//             return numbers[0];
//         else
//             return numbers[2];

//     else

//         if (numbers[1] > numbers[2])
//         return numbers[1];

//     else
//         return numbers[2];
// }

// void PrintMaxOfNumbers(int numbers[3], int max)
// {
//     string result = "the max of the numbers " +
//                     to_string(numbers[0]) + " , " +
//                     to_string(numbers[1]) + " , " +
//                     to_string(numbers[2]) + " is : " +
//                     to_string(max);
//     cout << result << endl;
// }

//? #13

//? #14

// void ReadTwoNumbers(int numbers[2])
// {
//     cout << "enter number 1" << endl;
//     cin >> numbers[0];
//     cout << "enter number 2" << endl;
//     cin >> numbers[1];
// }

// void PrintTwoNumbers(int numbers[2])
// {
//     cout << "number 1 value = " << numbers[0] << endl;
//     cout << "number 2 value = " << numbers[1] << endl;
// }

// void SwapTwoNumbers(int numbers[2])
// {

//     int temp = numbers[0];

//     numbers[0] = numbers[1];

//     numbers[1] = temp;

//     cout << "the numbers have been swapped <>" << endl;
// }

//? #14

//? #15

// struct stRectangleInfo
// {
//     float height;
//     float width;
// };

// void ReadRectangleInfo(stRectangleInfo &recInfo)
// {
//     cout << "enter the height of the rectangle" << endl;
//     cin >> recInfo.height;
//     cout << "enter the width of the rectangle" << endl;
//     cin >> recInfo.width;
// }

// float CalculateRectangleArea(stRectangleInfo recInfo)
// {
//     return recInfo.height * recInfo.width;
// }

// void PrintRectangleArea(stRectangleInfo recInfo)
// {
//     cout << "the area of the rectangle is : " << CalculateRectangleArea(recInfo) << endl;
// }
//? #15

int main()
{

    // DONE # 11

    // int marks[3];
    // ReadMarks(marks);
    // PrintMarks(marks);

    // DONE # 12

    // int number1 = 0, number2 = 0;
    // ReadTwoNumbers(number1, number2);
    // PrintMaxOfTwoNumbers(MaxOfTwoNumbers(number1, number2));

    // DONE # 13

    // int numbers[3];
    // ReadNumbers(numbers);
    // PrintMaxOfNumbers(numbers, MaxOfNumbers(numbers));

    // DONE # 14

    // int numbers[2];

    // ReadTwoNumbers(numbers);

    // PrintTwoNumbers(numbers);

    // SwapTwoNumbers(numbers);

    // PrintTwoNumbers(numbers);

    // DONE # 15

    // stRectangleInfo RecInfo;
    // ReadRectangleInfo(RecInfo);
    // PrintRectangleArea(RecInfo);

    return 0;
}

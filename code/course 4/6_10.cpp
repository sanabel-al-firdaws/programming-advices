#include <iostream>
using namespace std;

//? #6
// struct stInfo
// {
//     string first_name;
//     string last_name;
// };

// stInfo ReadInfo()
// {
//     stInfo info;

//     cout << "What is your first name?" << endl;

//     cin >> info.first_name;

//     cout << "What is your last name?" << endl;
//     cin >> info.last_name;

//     return info;
// }
// string GetFullName(stInfo info)
// {
//     string fullname = "";

//     fullname = info.first_name + "  " + info.last_name;
//     return fullname;
// }

// void PrintFullname(string fullname)
// {

//     cout << fullname << endl;
// }

//? #6

//? #7

// int ReadNumber()
// {
//     int number;

//     cout << "Enter a Number " << endl;

//     cin >> number;

//     return number;
// }

// float CalculateHalfNumber(int number)
// {

//     return (float)number / 2;
// }

// void PrintNumber(int number)
// {
//     string result = "Half of " + to_string(number) + " is : " + to_string(CalculateHalfNumber(number));
//     cout << result << endl;
// }
//? #7

//? #8

// enum enPassFail
// {
//     Pass = 1,
//     Fail = 2
// };

// int ReadMark()
// {
//     int mark;

//     cout << "Please enter your mark " << endl;

//     cin >> mark;

//     return mark;
// }

// enPassFail CheckMark(float mark)
// {

//     if (mark >= 50)
//         return enPassFail::Pass;
//     else
//         return enPassFail::Fail;
// }

// void PrintMark(float mark)
// {
//     if (CheckMark(mark) == enPassFail::Pass)
//         cout << "You Have Passed ! your mark is " << mark << endl;
//     else
//         cout << "You Have failed ! your mark is " << mark << endl;
// }

//? #8

//? #9

// int ReadNumber()
// {
//     int number;

//     cout << "Enter a Number " << endl;

//     cin >> number;

//     return number;
// }

// void ReadNumbers(int numbers[3])
// {

//     numbers[0] = ReadNumber();
//     numbers[1] = ReadNumber();
//     numbers[2] = ReadNumber();
// }

// int AddNumbers(int numbers[3])
// {
//     int sum = numbers[0] + numbers[1] + numbers[2];

//     return sum;
// }

// void PrintNumbers(int numbers[3])
// {

//     string result = to_string(numbers[0]) + " + " + to_string(numbers[1]) + " + " + to_string(numbers[2]) + " = " + to_string(AddNumbers(numbers));
//     cout << result << endl;
// }

//? #9

//? #10

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

// void PrintMarks(int marks[3])
// {

//     string result = " ( " +to_string(marks[0]) + " + " + to_string(marks[1]) + " + " + to_string(marks[2]) + " ) / 3 = " + to_string(CalculateMarks(marks));
//     cout << result << endl;
// }

//? #10


int main()
{
    // DONE:  #6
    // PrintFullname(GetFullName(ReadInfo()));

    // DONE:  #7

    // PrintNumber(ReadNumber());

    // DONE:  #8

    // PrintMark(ReadMark());

    // DONE:  #9
    // int numbers[3];
    // ReadNumbers(numbers);
    // PrintNumbers(numbers);

    // DONE # 10

    // int marks[3];
    // ReadMarks(marks);
    // PrintMarks(marks);

    return 0;
}

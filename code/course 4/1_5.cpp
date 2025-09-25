#include <iostream>
#include <cmath>
using namespace std;

// string ReadName()
// {
//     string name;

//     cout << "Please Enter Your Name" << endl;
//     getline(cin, name);

//     return name;
// }

// void PrintName(string name)
// {
//     cout << "Your Name is : " << name << endl;
// }

// enum enNumberType
// {
//     Odd = 1,
//     Even = 2
// };

// int ReadNumber()
// {
//     int number;
//     cout << "Please Enter a Number" << endl;
//     cin >> number;
//     return number;
// }

// enNumberType CheckNumberType(int number)
// {

//     if (number % 2 == 0)
//         return Even;
//     else
//         return Odd;
// }

// void PrintNumberType(enNumberType NumberType)
// {
//     if (NumberType == Even)
//         cout << "the number is even" << endl;
//     else
//         cout << "the number is odd" << endl;
// }

//? #4

// struct stInfo
// {
//     bool hasDrivingLicense;
//     int age;
// };

// stInfo ReadInfo()
// {
//     stInfo info;

//     cout << "Please Enter Your age" << endl;
//     cin >> info.age;

//     cout << "Do you have a Driving License" << endl;
//     cin >> info.hasDrivingLicense;

//     return info;
// }

// bool IsAccepted(stInfo info)
// {
//     return (info.age >= 21 && info.hasDrivingLicense == true);
// }

// void PrintInfo(stInfo info)
// {

//     if (IsAccepted(info))
//         cout << "you have been hired !" << endl;
//     else
//         cout << "you have been rejected !" << endl;
// }
//? #4

//? #5

struct stInfo
{
    bool hasDrivingLicense;
    int age;
    bool hasRecommendation;
};

stInfo ReadInfo()
{
    stInfo info;

    cout << "Please Enter Your age" << endl;
    cin >> info.age;

    cout << "Do you have a Driving License?" << endl;
    cin >> info.hasDrivingLicense;

        cout << "Do you have a Recommendation?" << endl;

    cin >> info.hasRecommendation;

    return info;
}

bool IsAccepted(stInfo info)
{
    return (info.hasRecommendation || (info.age >= 21 && info.hasDrivingLicense == true));
}

void PrintInfo(stInfo info)
{

    if (IsAccepted(info))
        cout << "you have been hired !" << endl;
    else
        cout << "you have been rejected !" << endl;
}
///? #5


int main()
{
    // DONE:  #1

    // PrintName("Abdulhakim");

    // DONE:  #2
    // PrintName(ReadName());

    // DONE:  #3

    // PrintNumberType(CheckNumberType(ReadNumber()));
    // DONE:  #4

    // PrintInfo(ReadInfo());

    // DONE # 5

    PrintInfo(ReadInfo());

    return 0;
}

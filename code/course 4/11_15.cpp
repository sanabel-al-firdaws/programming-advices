#include <iostream>
using namespace std;

//? #11

enum enPassFail
{
    Pass = 1,
    Fail = 2
};

int ReadMark()
{
    int number;

    cout << "Enter a Your Mark " << endl;

    cin >> number;

    return number;
}

void ReadMarks(int marks[3])
{

    marks[0] = ReadMark();
    marks[1] = ReadMark();
    marks[2] = ReadMark();
}

float CalculateMarks(int marks[3])
{
    float average = (marks[0] + marks[1] + marks[2]) / 3;

    return average;
}

enPassFail CheckAverage(float average)
{
    if (average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintMarks(int marks[3])
{
    float average = CalculateMarks(marks);

    if (CheckAverage(average) == enPassFail::Pass)
        cout << "You Have Passed !\n\nyour average is " << average << endl;
    else
        cout << "You Have Failed !\n\nyour average is " << average << endl;
}

//? #11

int main()
{

    // DONE # 11

    int marks[3];
    ReadMarks(marks);
    PrintMarks(marks);

    return 0;
}

#include <iostream>

using namespace std;

void ReadData(float Grades[3])
{
    cout << "Enter Grade 1" << endl;
    cin >> Grades[0];
    cout << "Enter Grade 2" << endl;
    cin >> Grades[1];
    cout << "Enter Grade 3" << endl;
    cin >> Grades[2];
};

float GetAverageGrades(float Grades[3])
{

    return (Grades[0] + Grades[1] + Grades[2]) / 3;
};
int main()
{

    int length_of_array = 3;
    float Grades[length_of_array];
    float average;
    ReadData(Grades);

    average = GetAverageGrades(Grades);

    cout << "The Avreage of Grades is " << average << endl;
    return 0;
}

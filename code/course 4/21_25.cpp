#include <iostream>
#include <cmath>
using namespace std;

//? #21

// float ReadCircumference()
// {
//     float circumference = 0;
//     cout << "Enter the Circumference of the Circle" << endl;

//     cin >> circumference;
//     return circumference;
// }

// float CircleAreaByCircumference(float circumference)
// {

//     float area = pow(circumference, 2) / (M_PI * 4);
//     return area;
// }

// void PrintCircleArea(float area)
// {
//     cout << "The Area of Circle is " + to_string(area) << endl;
// }

//? #21

//? #22

// void ReadIsocscelesTriangle(float &a, float &b)
// {
//     cout << "Enter the Side A of the Triangle" << endl;

//     cin >> a;

//     cout << "Enter the Side B of the Triangle" << endl;

//     cin >> b;
// }

// float CircleAreaByTriangleSides(float a, float b)
// {

//     float area = M_PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
//     return area;
// }

// void PrintCircleArea(float area)
// {
//     cout << "The Area of Circle is " + to_string(area) << endl;
// }

//? #22

//? #23

// void ReadArbitraryTriangle(float &a, float &b, float &c)
// {
//     cout << "Enter the Point A of the Triangle" << endl;

//     cin >> a;

//     cout << "Enter the Point B of the Triangle" << endl;

//     cin >> b;

//     cout << "Enter the Point C of the Triangle" << endl;

//     cin >> c;
// }

// float CircleAreaByInscripedTriangle(float a, float b, float c)
// {
//     float p = (a + b + c) / 2;
//     float temp = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
//     float area = M_PI * pow(temp, 2);
//     return area;
// }

// void PrintCircleArea(float area)
// {
//     cout << "The Area of Circle is " + to_string(area) << endl;
// }

//? #23

//? #24

// float ReadAge()
// {
//     float age = 0;
//     cout << "Enter your age" << endl;

//     cin >> age;
//     return age;
// }

// bool ValidateNumberInRange(int number, int from, int to)
// {
//     return (number >= from && number <= to);
// }
// void PrintResult(int age)
// {
//     if (ValidateNumberInRange(age, 18, 45))
//     {
//         cout << "your age is valid" << endl;
//     }
//     else
//     {
//         cout << "your age is invalid" << endl;
//     }
// }

//? #24

//? #25

bool ValidateNumberInRange(int number, int from, int to)
{
    return (number >= from && number <= to);
}

float ReadAge()
{
    float age = 0;

    cout << "Enter your age" << endl;
    cin >> age;

    return age;
}

float ReadUntilAgeBetween(int from, int to)
{
    float age = ReadAge();

    while (!ValidateNumberInRange(age, from, to))
    {
        string message = "You must be >= " + to_string(from) + " and <= " + to_string(to);
        cout << message << endl;

        age = ReadAge();
    }

    return age;
}

void PrintResult(int age)
{
    if (ValidateNumberInRange(age, 18, 45))
    {
        cout << "your age is valid" << endl;
    }
    else
    {
        cout << "your age is invalid" << endl;
    }
}

//? #25

int main()
{

    //? #21

    // PrintCircleArea(CircleAreaByCircumference(ReadCircumference()));

    //? #22

    // float a = 0, b = 0;
    // ReadIsocscelesTriangle(a, b);
    // PrintCircleArea(CircleAreaByTriangleSides(a, b));

    //? #23
    // float a = 0, b = 0, c = 0;
    // ReadArbitraryTriangle(a, b, c);
    // PrintCircleArea(CircleAreaByInscripedTriangle(a, b, c));

    //? #24
    PrintResult(ReadUntilAgeBetween(18, 45));

    //? #25

    return 0;
}

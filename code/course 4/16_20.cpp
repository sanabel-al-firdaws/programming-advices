#include <iostream>
#include <cmath>
using namespace std;

//? #16

// void ReadRectangle(float &side_area, float &diagonal)
// {
//     cout << "Enter the Side Area of The Rectangle " << endl;

//     cin >> side_area;

//     cout << "Enter the Diagonal of The Rectangle " << endl;

//     cin >> diagonal;
// }
// float RectangleAreaBySideAndDiaognal(float side_area, float diagonal)
// {
//     float area = side_area * sqrt(pow(diagonal, 2) - pow(side_area, 2));
//     return area;
// }
// void PrintRectangleArea(float area)
// {
//     cout << "The Area of Rectangle is " + to_string(area) << endl;
// }
//? #16

//? #17

// void ReadTriangle(float &base, float &height)
// {
//     cout << "Enter Side A of Triangle" << endl;

//     cin >> base;

//     cout << "Enter Line H of Triangle" << endl;

//     cin >> height;
// }

// float CalculateTriangleArea(float base, float height)
// {
//     float area = (base / 2) * height;
//     return area;
// }

// void PrintTriangleArea(float area)
// {
//     cout << "The Area of Triangle is " + to_string(area) << endl;
// }

//? #17

//? #18

// float ReadCircleRadius()
// {
//     float radius = 0;
//     cout << "Enter the Radius of the Circle" << endl;

//     cin >> radius;
//     return radius;
// }

// float CalculateCircleAreaByRadius(float radius)
// {
//     float area = M_PI * pow(radius, 2);
//     return area;
// }

// void PrintCircleArea(float area)
// {
//     cout << "The Area of Circle is " + to_string(area) << endl;
// }

//? #18

//? #19

// float ReadCircleDiameter()
// {
//     float diameter = 0;
//     cout << "Enter the Diameter of the Circle" << endl;

//     cin >> diameter;
//     return diameter;
// }

// float CalculateCircleAreaByDiameter(float diameter)
// {
//     float area = (M_PI * pow(diameter, 2)) / 4;
//     return area;
// }

// void PrintCircleArea(float area)
// {
//     cout << "The Area of Circle is " + to_string(area) << endl;
// }

//? #19

//? #20

float ReadSqaureSide()
{
    float square_side = 0;
    cout << "Enter a Side of the Sqaure" << endl;

    cin >> square_side;
    return square_side;
}

float CalculateCircleAreaInscripedInSquare(float squareArea)
{

    float area = (M_PI * pow(squareArea, 2)) / 4;
    return area;
}

void PrintCircleArea(float area)
{
    cout << "The Area of Circle is " + to_string(area) << endl;
}

//? #20

int main()
{
    //? #16

    // float side_area, diagonal;
    // ReadRectangle(side_area, diagonal);
    // PrintRectangleArea(RectangleAreaBySideAndDiaognal(side_area, diagonal));

    //? #17

    // float base, height;
    // ReadTriangle(base, height);
    // PrintTriangleArea(CalculateTriangleArea(base, height));

    //? #18

    // PrintCircleArea(CalculateCircleAreaByRadius(ReadCircleRadius()));

    //? #19

    // PrintCircleArea(CalculateCircleAreaByDiameter(ReadCircleDiameter()));

    //? #20

    PrintCircleArea(CalculateCircleAreaInscripedInSquare(ReadSqaureSide()));

    return 0;
}

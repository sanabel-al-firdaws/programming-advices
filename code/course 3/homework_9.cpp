#include <iostream>

using namespace std;
// Done: #36
// enum operation_type
// {
//     Add = 1,
//     Subtract = 2,
//     Multiply = 3,
//     Divide = 4
// };

// void PrintResult(float numbers[2], operation_type operation)
// {
//     switch (operation)
//     {
//     case Add:
//         cout << numbers[0] << " + " << numbers[1] << " = " << numbers[0] + numbers[1];
//         break;

//     case Subtract:
//         cout << numbers[0] << " - " << numbers[1] << " = " << numbers[0] - numbers[1];
//         break;
//     case Multiply:
//         cout << numbers[0] << " * " << numbers[1] << " = " << numbers[0] * numbers[1];
//         break;
//     case Divide:
//         cout << numbers[0] << " / " << numbers[1] << " = " << numbers[0] / numbers[1];
//         break;

//     default:
//         cout << "Wrong Operation" << endl;
//         break;
//     }
// }
// void ReadOperation(float numbers[2], operation_type &operation)
// {
//     int operation_number;
//     cout << "enter number 1" << endl;
//     cin >> numbers[0];
//     cout << "enter number 2" << endl;
//     cin >> numbers[1];

//     cout << " ********* \n (1) Add\n (2) Subtract\n (3) Multiply\n (4) Divide" << endl;

//     cin >> operation_number;

//     operation = (operation_type)operation_number;
// }
// Done: #36
enum day_type
{
    Saturday = 1,
    Sunday = 2,
    Monday = 3,
    Tuesday = 4,
    Wednesday = 5,
    Thursday = 6,
    Friday = 7,

};
int main()
{
    // Done: #36
    // float numbers[2];
    // operation_type operation;

    // ReadOperation(numbers, operation);
    // PrintResult(numbers, operation);

    // Done: #44

    // int day_number = 0;
    // day_type day;
    // while (

    //     day_number < 1 || day_number > 7
    //     //?   this code bellow is equivlent to the above code
    //     //?   !(day_number >= 1 && day_number <= 7)

    // )
    // {

    //     cout << "Enter a Day Number from 1 to 7 \n";
    //     cin >> day_number;
    //     day = (day_type)day_number;

    //     switch (day)
    //     {
    //     case Saturday:
    //         cout << "You Choosed Saturday ! ";
    //         break;
    //     case Sunday:
    //         cout << "You Choosed Sunday ! ";
    //         break;
    //     case Monday:
    //         cout << "You Choosed Monday ! ";
    //         break;
    //     case Tuesday:
    //         cout << "You Choosed Tuesday ! ";
    //         break;
    //     case Wednesday:
    //         cout << "You Choosed Wednesday ! ";
    //         break;
    //     case Thursday:
    //         cout << "You Choosed Thursday ! ";
    //         break;
    //     case Friday:
    //         cout << "You Choosed Friday ! ";
    //         break;

    //     default:
    //         break;
    //     }
    // }

 

    return 0;
}
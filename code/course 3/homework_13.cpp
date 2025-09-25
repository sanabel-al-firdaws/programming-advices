#include <iostream>
using namespace std;

int main()
{

    // for (int i = 65; i <= 90; i++)
    // {
    //     cout << "Letter: " << char(i) << "\n\n";

    //     for (int j = 65; j <= 90; j++)
    //     {

    //         cout << char(i) << char(j) << endl;
    //     }
    //     cout << "------------------\n\n";
    // }
    //? Letter: A
    //? AA
    //? AB
    //? AC
    //? AD
    //? AE
    //? ..
    //? ..
    //? ------------------
    //? Letter: Z
    //? ..
    //? ZV
    //? ZW
    //? ZX
    //? ZY
    //? ZZ

    // for (int i = 1; i <= 10; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << "\n";
    // }

    //? 1
    //? 12
    //? 123
    //? 1234
    //? 12345
    //? 123456
    //? 1234567
    //? 12345678
    //? 123456789
    //? 12345678910

    // for (int i = 10; i >= 1; i--)
    // {

    //     for (int j = 1; j <= i; j++)
    //     {

    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    //? **********
    //? *********
    //? ********
    //? *******
    //? ******
    //? *****
    //? ****
    //? ***
    //? **
    //? *

    //? this is my first solution

    // for (int i = 10; i >= 1; i--)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << i - j + 1;
    //     }
    //     cout << "\n";
    // }

    //? a better way to solve this problem

    // for (int i = 10; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << "\n";
    // }

    //? 12345678910
    //? 123456789
    //? 12345678
    //? 1234567
    //? 123456
    //? 12345
    //? 1234
    //? 123
    //? 12
    //? 1

    for (int i = 65; i <= 70; i++)
    {
        for (int j = 65; j <= i ; j++)
        {
            cout << char(j);
        }
        cout << "\n";
    }

    //? A
    //? A B
    //? A B C
    //? A B C D
    //? A B C D E
    //? A B C D E F

    // for (int i = 1; i <= 10; i++)
    // {
    //     for (int j = i; j <= 10; j++)
    //     {

    //         cout << j;
    //     }
    //     cout << "\n";
    // }

    //? 12345678910
    //? 2345678910
    //? 345678910
    //? 45678910
    //? 5678910
    //? 678910
    //? 78910
    //? 8910
    //? 910
    //? 10

    return 0;
}
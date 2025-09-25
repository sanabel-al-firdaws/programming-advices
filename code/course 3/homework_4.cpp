#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str1, str2, str3;

    cout << "enter number 1" << endl;
    cin >> str2;

    cout << "enter number 2" << endl;
    cin >> str3;

    cout << "enter your full name" << endl;
    cin.ignore(1, '\n');
    getline(cin, str1);

    cout << "the lenght of your name is: " << str1.length() << endl;
    cout << "the chars at index 0,2,5,7 in the name " << str1 << " are " << str1[0] << str1[2] << str1[5] << str1[7] << endl;

    cout << "the concatination of number 1 + number 2 is: " << str2 + str3 << endl;

    cout << str2 << " + " << str3 << " = " << stoi(str2) + stoi(str3) << endl;

    return 0;
}
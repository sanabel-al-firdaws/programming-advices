#include <iostream>
#include <string>

using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(strInfo &Info)
{

    cout << "Please enter FirstName?\n";
    cin >> Info.FirstName;

    cout << "Please enter LastName?\n";
    cin >> Info.LastName;

    cout << "Please enter Age?\n";
    cin >> Info.Age;

    cout << "Please enter Phone?\n";
    cin >> Info.Phone;
}

void PrintInfo(strInfo Info)
{

    cout << "\n**********************************\n";

    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;

    cout << "\n**********************************\n";
}

void ReadPersonsInfo(strInfo Persons[100], int &array_length)
{

    cout << "Enter How Many Persons !" << endl;
    cin >> array_length;

    for (int i = 0; i <= array_length - 1; i++)
    {

        cout << "Please enter Person's " << i + 1 << " info: " << endl;

        ReadInfo(Persons[i]);
    }
}

void PrintPersonsInfo(strInfo Persons[100], int array_length)
{

    for (int i = 0; i <= array_length - 1; i++)
    {
        cout << "Person's " << i + 1 << " info: " << endl;
        PrintInfo(Persons[i]);
    }
}

int main()
{

    int array_length;
    strInfo Persons[2];

    ReadPersonsInfo(Persons, array_length);
    PrintPersonsInfo(Persons, array_length);

    return 0;
}

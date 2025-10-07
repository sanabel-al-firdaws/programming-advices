#include <iostream>
#include <cmath>
using namespace std;

//? #41
// int ReadPositiveNumber(string message)
// {

//     int number = 0;

//     while (number < 1)
//     {

//         cout << message << endl;

//         cin >> number;
//     }
//     cout << endl;
//     return number;
// }

// float HoursToDays(float hours)
// {
//     return hours / 24;
// }
// float DaysToWeeks(float days)
// {
//     return days / 7;
// }

// float HoursToWeeks(float hours)
// {
//     return DaysToWeeks(HoursToDays(hours));
// }
//? #41

//? #42

// struct stTaskDuration
// {
//     int NumberOfDays;
//     int NumberOfHours;
//     int NumberOfMinutes;
//     int NumberOfSeconds;
// };

// int ReadPositiveNumber(string message)
// {

//     int number = 0;

//     while (number < 1)
//     {

//         cout << message << endl;

//         cin >> number;
//     }
//     cout << endl;
//     return number;
// }

// int TaskDurationInSeconds(stTaskDuration duration)
// {

//     int NumberOfSeconds = 0;

//     NumberOfSeconds =
//         24 * duration.NumberOfDays * 60 * 60; // Days * 24 = Hours
//                                               // Hours * 60 = Minutes
//                                               // Minutes * 60 = Seconds
//     NumberOfSeconds += 60 * 60 * duration.NumberOfHours;
//     NumberOfSeconds += 60 * duration.NumberOfMinutes;
//     NumberOfSeconds += duration.NumberOfSeconds;

//     return NumberOfSeconds;
// }

// stTaskDuration ReadTaskDuration()
// {
//     stTaskDuration taskDuration;
//     taskDuration.NumberOfDays = ReadPositiveNumber("Enter How Many Days");
//     taskDuration.NumberOfHours = ReadPositiveNumber("Enter How Many Hours");
//     taskDuration.NumberOfMinutes = ReadPositiveNumber("Enter How Many Minutes");
//     taskDuration.NumberOfSeconds = ReadPositiveNumber("Enter How Many Seconds");
//     return taskDuration;
// }

//? #42

//? #43

// struct stTaskDuration
// {
//     int NumberOfDays;
//     int NumberOfHours;
//     int NumberOfMinutes;
//     int NumberOfSeconds;
// };
// stTaskDuration TaskDurationFromSeconds(int total_seconds)
// {
//     stTaskDuration taskDuration;
//     long remainder = 0;
//     int seconds_per_day = 24 * 60 * 60;
//     int seconds_per_hour = 60 * 60;
//     int seconds_per_minute = 60;

//     taskDuration.NumberOfDays = floor(total_seconds / seconds_per_day);
//     remainder = total_seconds % seconds_per_day;

//     taskDuration.NumberOfHours = floor(remainder / seconds_per_hour);

//     remainder %= seconds_per_hour;

//     taskDuration.NumberOfMinutes = floor(remainder / seconds_per_minute);
//     remainder %= seconds_per_minute;

//     taskDuration.NumberOfSeconds = remainder;

//     return taskDuration;
// }

// int ReadPositiveNumber(string message)
// {

//     int number = 0;
//     do
//     {

//         cout << message << endl;

//         cin >> number;
//     } while (number < 1);

//     cout << endl;
//     return number;
// }

// void PrintTaskDuration(int total_seconds, stTaskDuration duration)
// {
//     cout << "Total Seconds :" << total_seconds << endl;
//     cout << "***************************" << endl;

//     cout << "Days :" << duration.NumberOfDays << endl;
//     cout << "Hours :" << duration.NumberOfHours << endl;
//     cout << "Minutes :" << duration.NumberOfMinutes << endl;
//     cout << "Seconds :" << duration.NumberOfSeconds << endl;
// }

//? #43

//? #44

// int ReadNumberInRange(int from, int to, string message)
// {

//     int number = 0;
//     do
//     {

//         cout << message << endl;

//         cin >> number;
//     } while (number < from || number > to);

//     cout << endl;
//     return number;
// }

// enum enDayOfWeek
// {
//     Saturday = 1,
//     Sunday = 2,
//     Monday = 3,
//     Tuesday = 4,
//     Wednesday = 5,
//     Thursday = 6,
//     Friday = 7
// };

// enDayOfWeek ReadDayOfWeek()
// {
//     return (enDayOfWeek)ReadNumberInRange(1, 7, "(1) Saturday\n(2)Sunday\n(3) Monday\n(4) Tuesday\n(5) Wednesday\n(6) Thursday\n(7) Friday\n");
// }
// string GetDayOfWeek(enDayOfWeek day)
// {
//     switch (day)
//     {
//     case 1:
//         return "Saturday";

//     case 2:
//         return "Sunday";

//     case 3:
//         return "Monday";

//     case 4:
//         return "Tuesday";

//     case 5:
//         return "Wednesday";

//     case 6:
//         return "Thursday";

//     case 7:
//         return "Friday";

//     default:
//         return "Not a Valid Day";
// }

//? #44

//? #45
int ReadNumberInRange(int from, int to, string message)
{

    int number = 0;
    do
    {

        cout << message << endl;

        cin >> number;
    } while (number < from || number > to);

    cout << endl;
    return number;
}

enum enMonthOfYear
{
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

enMonthOfYear ReadMonthOfYear()
{
    return (enMonthOfYear)ReadNumberInRange(1, 12, "(1) January\n(2) February\n(3) March\n(4) April\n(5) May\n(6) June\n(7) July\n(8) August\n(9) September\n(10) October\n(11) November\n(12) December");
}
string GetMonthOfYear(enMonthOfYear month)
{
    switch (month)
    {
    case 1:
        return "January";

    case 2:
        return "February";

    case 3:
        return "March";

    case 4:
        return "April";

    case 5:
        return "May";

    case 6:
        return "June";

    case 7:
        return "July";

    case 8:
        return "August";

    case 9:
        return "September";

    case 10:
        return "October";

    case 11:
        return "November";

    case 12:
        return "December";

    default:
        return "Not a Valid Month";
    }
}
//? #45

int main()
{

    //? #41
    // float hours = ReadPositiveNumber("Enter How Many Hours");
    // float days = HoursToDays(hours);
    // float weeks = HoursToWeeks(hours); //! this is slower than using the days value

    // cout << "Hours: " << hours << endl;
    // cout << "Days: " << days << endl;
    // cout << "Weeks: " << weeks << endl;
    //? #41

    //? #42

    // cout << "Total Seconds :" << TaskDurationInSeconds(ReadTaskDuration()) << endl;
    //? #42

    //? #43

    // int total_seconds = ReadPositiveNumber("enter the total seconds"); // test: 193535 total_seconds

    // stTaskDuration duration = TaskDurationFromSeconds(total_seconds);

    // PrintTaskDuration(total_seconds, duration);

    //? #43

    //? #44

    // cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

    //? #44

    //? #45
    cout << GetMonthOfYear(ReadMonthOfYear()) << endl;

    //? #45
    return 0;
}

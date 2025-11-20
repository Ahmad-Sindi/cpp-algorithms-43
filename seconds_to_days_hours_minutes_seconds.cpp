// Algorithm Challenge
// 43 Seconds to Days, Hours, Minutes, and Seconds
// Converts a total number of seconds into days, hours, minutes, and seconds

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int totalSeconds, secondsPerDay, secondsPerHour, secondsPerMinute;
    int numOfDays, numOfHours, numOfMinutes, numOfSeconds, remainder;

    // Ask the user to input the total seconds
    cout << "Enter the total number of seconds: ";
    cin >> totalSeconds;

    // Define constants for conversion
    secondsPerDay = 24 * 60 * 60; // 24 hours * 60 minutes * 60 seconds
    secondsPerHour = 60 * 60;     // 60 minutes * 60 seconds
    secondsPerMinute = 60;        // 60 seconds in a minute

    // Calculate number of days
    numOfDays = totalSeconds / secondsPerDay;
    remainder = totalSeconds % secondsPerDay;

    // Calculate number of hours
    numOfHours = remainder / secondsPerHour;
    remainder = remainder % secondsPerHour;

    // Calculate number of minutes
    numOfMinutes = remainder / secondsPerMinute;
    remainder = remainder % secondsPerMinute;

    // Remaining seconds
    numOfSeconds = remainder;

    // Display the result in D:H:M:S format
    cout << "Result: " << numOfDays << " : "
         << numOfHours << " : "
         << numOfMinutes << " : "
         << numOfSeconds << "\n";

    return 0;
}

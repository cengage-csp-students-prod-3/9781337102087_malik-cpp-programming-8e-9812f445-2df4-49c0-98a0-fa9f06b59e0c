#include "extClockType.h"

// Default constructor
extClockType::extClockType() : clockType()
{
    timeZone = "UTC";
}

// Constructor with parameters
extClockType::extClockType(int hours, int minutes, int seconds, string zone)
    : clockType(hours, minutes, seconds)
{
    timeZone = zone;
}

// Set time zone
void extClockType::setTimeZone(string zone)
{
    timeZone = zone;
}

// Get time zone
string extClockType::getTimeZone() const
{
    return timeZone;
}

// Print time + time zone
void extClockType::printTime() const
{
    clockType::printTime(); // call base class version
    cout << " " << timeZone;
}

// Set time + time zone
void extClockType::setTime(int hours, int minutes, int seconds, string zone)
{
    clockType::setTime(hours, minutes, seconds); // call base class version
    timeZone = zone;
}
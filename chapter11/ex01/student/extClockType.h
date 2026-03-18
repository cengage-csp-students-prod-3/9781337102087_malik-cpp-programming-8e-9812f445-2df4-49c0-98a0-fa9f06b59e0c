#ifndef H_extClockType
#define H_extClockType

#include "clockType.h"
#include <iostream>
#include <string>

using namespace std;

class extClockType : public clockType
{
public:
    // Constructors
    extClockType();
    extClockType(int hours, int minutes, int seconds, string zone);

    // Setter & Getter
    void setTimeZone(string zone);
    string getTimeZone() const;

    // Print full time with zone
    void printTime() const;

private:
    string timeZone;
};

#endif
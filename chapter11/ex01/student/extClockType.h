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

    // Time Zone Setter & Getter
    void setTimeZone(string zone);
    string getTimeZone() const;

    // Print and Set Time
    void printTime() const;
    void setTime(int hours, int minutes, int seconds, string zone);


private:
    string timeZone;
};

#endif
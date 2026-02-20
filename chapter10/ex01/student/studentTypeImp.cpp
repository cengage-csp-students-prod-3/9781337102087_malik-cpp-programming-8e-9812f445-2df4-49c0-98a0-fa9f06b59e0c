// Write your code here
#include "studentType.h"

// Set functions
void studentType::setFirstName(string val)
{
    firstName = val;
}

void studentType::setLastName(string val)
{
    lastName = val;
}

void studentType::setGrade(char val)
{
    courseGrade = val;
}

void studentType::setTestScore(int val)
{
    testScore = val;
}

void studentType::setProgScore(int val)
{
    programmingScore = val;
}

void studentType::setGPA(double val)
{
    GPA = val;
}

// Get functions
string studentType::getFirstName() const
{
    return firstName;
}

string studentType::getLastName() const
{
    return lastName;
}

char studentType::getGrade() const
{
    return courseGrade;
}

int studentType::getTestScore() const
{
    return testScore;
}

int studentType::getProgScore() const
{
    return programmingScore;
}

double studentType::getGPA() const
{
    return GPA;
}
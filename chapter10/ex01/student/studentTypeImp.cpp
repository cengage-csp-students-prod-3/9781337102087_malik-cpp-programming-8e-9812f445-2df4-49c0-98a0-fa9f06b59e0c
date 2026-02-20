#include <iostream>
#include "studentType.h"

using namespace std;

// Default Constructor
studentType::studentType()
{
    firstName = "";
    lastName = "";
    courseGrade = 'F';
    testScore = 0;
    programmingScore = 0;
    GPA = 0.0;
}

// Parameterized Constructor
studentType::studentType(string fName, string lName,
                         char grade, int tScore,
                         int pScore, double gpa)
{
    firstName = fName;
    lastName = lName;
    courseGrade = grade;
    testScore = tScore;
    programmingScore = pScore;
    GPA = gpa;
}

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

// Print function
void studentType::print() const
{
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Grade: " << courseGrade << endl;
    cout << "Test score: " << testScore << endl;
    cout << "Programming score: " << programmingScore << endl;
    cout << "GPA: " << GPA << endl;
    cout << "***************" << endl;
}
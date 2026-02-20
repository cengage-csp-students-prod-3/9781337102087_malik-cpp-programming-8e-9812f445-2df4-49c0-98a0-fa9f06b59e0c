#ifndef H_STUDENTTYPE
#define H_STUDENTTYPE

#include <string>

using namespace std;

class studentType
{
public:
    // Constructors
    studentType();  // default
    studentType(string fName, string lName,
                char grade, int tScore,
                int pScore, double gpa);

    // Set functions
    void setFirstName(string val);
    void setLastName(string val);
    void setGrade(char val);
    void setTestScore(int val);
    void setProgScore(int val);
    void setGPA(double val);

    // Get functions
    string getFirstName() const;
    string getLastName() const;
    char getGrade() const;
    int getTestScore() const;
    int getProgScore() const;
    double getGPA() const;

    // Print function
    void print() const;

private:
    string firstName;
    string lastName;
    char courseGrade;
    int testScore;
    int programmingScore;
    double GPA;
};

#endif
#ifndef Doctor_H
#define Doctor_H
#include"Patient.h"
using namespace std;
class Patient;
class Doctor: public Patient
{
protected:
    //name
    //number
    //email
    string specialization;
    int grade;
    int charges;

public:
    int TotalDocctors;
    //Default Constructer
    Doctor();
     //Over Loaded Constructer
    Doctor(string,string,int,int);

    void setSpecialization(string);
    string getSpecialization();

    void setGrade(int);
    int getGrade();

    void setcharges(int);
    int geycharges();

    void setTotalDoctrs(int);
    int getTotalDoctrs();

    void DisplayData();
};

#endif // Doctor_H

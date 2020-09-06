#ifndef Doctor_H
#define Doctor_H
#include"Patient.h"
using namespace std;
class Patient;
class Doctor: public Patient
{
public:
    //name
    //number
    //email
    string specialization;
    int grade;
    int charges;
    int TotalDocctors;

public:
    Doctor();
    Doctor(string,string,int,int,int);

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

#include <iostream>
#ifndef Hospital_H
#define Hospital_H
using namespace std;
#include"Doctor.h"
#include"Patient.h"

class Doctor;
class Hospital : public Patient
{
private:


public:
    Hospital();
    int objNo;
    static int objCnt;

    string Ownership;
    //Default Constructer

    // Overloaded Constructer
    Hospital(double,string,string,string);

    void setPublicOrPrivateHospital(string);
    string getPublicOrPrivateHospital();

    void DisplayData();
};

#endif // included_HOSPITAL_H

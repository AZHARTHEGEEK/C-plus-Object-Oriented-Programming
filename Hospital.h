#include <iostream>
#ifndef Hospital_H
#define Hospital_H
using namespace std;
#include"Doctor.h"
#include"Patient.h"

class Doctor;
class Hospital : public Patient
{
public:
    //Default Constructer
    Hospital();
    int objNo;
    static int objCnt;
    string Ownership;

    // Overloaded Constructer
    Hospital(double,string,string,string);

    void setPublicOrPrivateHospital(string);
    string getPublicOrPrivateHospital();

    void DisplayData();
};

#endif // Hospital_H

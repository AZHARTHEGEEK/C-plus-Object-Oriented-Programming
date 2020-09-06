//#ifndef included_HOSPITAL_H
//#define included_HOSPITAL_H

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
    string Ownership;
    //Default Constructer
    Hospital();
    // Overloaded Constructer
    Hospital(double,string,string,string);

    void setPublicOrPrivateHospital(string);
    string getPublicOrPrivateHospital();

    void DisplayData();
};

#endif // included_HOSPITAL_H

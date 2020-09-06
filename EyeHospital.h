#ifndef Children_H
#define  Children_H
#include"Hospital.h"
#include"Doctor.h"
using namespace std;
class Doctor;
class EyeHospital : public Hospital
{
private:
    string sizeOfHos;
    string services;
    string treatmentType;


public:
    Doctor newObj;
    EyeHospital(double,string,string,string,string,string,int);
    EyeHospital();

    void setSizeOfHos(string);
    string getSizeOfHos();

    void setOwnership(string);
    string getOwnership();

    void setServices(string);
    string getServices();

    void setTreatmentType(string);
    string getTreatmentType();

    void DisplayData();
};

#endif // included_CHILDRENHOS_H



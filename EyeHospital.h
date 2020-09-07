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
    // Default Constructor
    EyeHospital();
    //Over Loaded Constructer
    EyeHospital(double,string,string,string,string,string,string,int);

    Doctor DocComposition;

    void setSizeOfHos(string);
    string getSizeOfHos();

    void setServices(string);
    string getServices();

    void setTreatmentType(string);
    string getTreatmentType();

    void DisplayData();
};

#endif // Children_H



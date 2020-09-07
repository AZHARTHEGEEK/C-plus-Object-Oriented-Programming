#ifndef included_CHILDREN_H
#define included_CHILDREN_H
#include"Hospital.h"
#include"Doctor.h"
using namespace std;
class Doctor;
class KidneyHospital : public Hospital
{
private:
    string sizeOfHos;
    string services;
    string treatmentType;

public:
        //Default Constructer
    KidneyHospital();
        //Over Loaded Constructer
    KidneyHospital(double,string,string,string,string,string,string,int);
    Doctor DocComposition;

    void setSizeOfHos(string);
    string getSizeOfHos();

    void setServices(string);
    string getServices();

    void setTreatmentType(string);
    string getTreatmentType();

    void DisplayData();
};

#endif // included_KidneyHospital_H



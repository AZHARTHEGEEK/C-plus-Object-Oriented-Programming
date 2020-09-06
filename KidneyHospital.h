#ifndef included_CHILDREN_H
#define included_CHILDREN_H
#include"Hospital.h"
using namespace std;
class KidneyHospital : public Hospital
{
private:
    string sizeOfHos;
    string ownership;
    string services;
    string treatmentType;

public:
    KidneyHospital();
    KidneyHospital(double,string,string,string,string,string,string);

    void setSizeOfHos(string);
    string getSizeOfHos();

    void setOwnership(string);
    string getOwnership();

    void setServices(string);
    string getServices();

    void setTreatmentType(string);
    string getTreatmentType();

    void displayData();
};

#endif // included_KidneyHospital_H



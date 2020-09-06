

#include<iostream>
#include"KidneyHospital.h"
using namespace std;

    KidneyHospital::KidneyHospital()
    {

    }
    KidneyHospital::KidneyHospital(double a,string b, string c,string d,string e,string f,string g, int h)
    {
        id= a;
        name = b;
        address = c;
        sizeOfHos = d;
        ownership = e;
        services = f;
        treatmentType = g;
        DocComposition.TotalDocctors = h;
    }

    void KidneyHospital::setSizeOfHos(string d)
    {
        sizeOfHos = d;
    }
    string KidneyHospital::getSizeOfHos()
    {
        return sizeOfHos;
    }

    void KidneyHospital::setOwnership(string e)
    {
        ownership = e;
    }
    string KidneyHospital::getOwnership()
    {
        return ownership;
    }

    void KidneyHospital::setServices(string f)
    {
        services = f;
    }
    string KidneyHospital::getServices()
    {
        return services;
    }

    void KidneyHospital::setTreatmentType(string g)
    {
        treatmentType = g;
    }
    string KidneyHospital::getTreatmentType()
    {
        return treatmentType;
    }

    void KidneyHospital::displayData()
    {
        cout<<endl<<"\t\t\t************************************************************************************";
        cout << endl << "\t\t\tHospital's Registeration No. : " << getid();
        cout << endl << "\t\t\tHospital's Name :" << getName();
        cout << endl << "\t\t\tHospital's Location : " << getaddress();
        cout << endl << "\t\t\tHospital's Size : " << getSizeOfHos();
        cout << endl << "\t\t\tHospital's Ownership :" << getOwnership();
        cout << endl << "\t\t\tHospital's Services : " << getServices();
        cout << endl << "\t\t\tHospital's Treatment Type : " << getTreatmentType() << endl;
        cout<<endl<<"\t\t\t************************************************************************************";
    }


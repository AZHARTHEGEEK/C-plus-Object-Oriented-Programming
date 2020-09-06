
#include<iostream>
#include"EyeHospital.h"
using namespace std;

    EyeHospital::EyeHospital()
    {

    }
    EyeHospital::EyeHospital(double a,string b, string c,string d,string e,string f, int g)
    {
        id = a;
        name = b;
        address = c;
        sizeOfHos = d;
        Ownership = e;
        services = f;
        newObj.TotalDocctors = g;
    }

    void EyeHospital::setSizeOfHos(string d)
    {
        sizeOfHos = d;
    }
    string EyeHospital::getSizeOfHos()
    {
        return sizeOfHos;
    }

    void EyeHospital::setOwnership(string e)
    {
        Ownership = e;
    }
    string EyeHospital::getOwnership()
    {
        return Ownership;
    }

    void EyeHospital::setServices(string f)
    {
        services = f;
    }
    string EyeHospital::getServices()
    {
        return services;
    }

    void EyeHospital::setTreatmentType(string g)
    {
        treatmentType = g;
    }
    string EyeHospital::getTreatmentType()
    {
        return treatmentType;
    }

    void EyeHospital::DisplayData()
    {
        cout << endl << "\t\t\tHospital's Registeration No. : " << getid();
        cout << endl << "\t\t\tHospital's Name : " << getName();
        cout << endl << "\t\t\tHospital's Location : " << getaddress();
        cout << endl << "\t\t\tHospital's Size : " << getSizeOfHos();
        cout << endl << "\t\t\tHospital's Ownership : " << getOwnership();
        cout << endl << "\t\t\tHospital's Services : " << getServices();
        cout << endl << "\t\t\tHospital's Treatment Type : " << getTreatmentType() << endl;
    }


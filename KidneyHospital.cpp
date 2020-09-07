#include<iostream>
#include"KidneyHospital.h"
using namespace std;

    //Default Constructer
    KidneyHospital::KidneyHospital()
    {

    }
        //Over Loaded Constructer
    KidneyHospital::KidneyHospital(double a,string b, string c,string d,string e,string f,string g, int h)
    {
        id= a;
        name = b;
        address = c;
        sizeOfHos = d;
        Ownership = e;
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

    void KidneyHospital::DisplayData()
    {
        cout<<endl<<"\t\t\t************************************************************************************";
        cout << endl << "\t\t\tHospital's Registration No.  : " << Patient::getid();
        cout << endl << "\t\t\tHospital's Name              : " << Patient::getName();
        cout << endl << "\t\t\tHospital's Location          : " << Patient::getaddress();
        cout << endl << "\t\t\tHospital's Size              : " << KidneyHospital::getSizeOfHos();
        cout << endl << "\t\t\tHospital's Ownership         : " << Hospital::getPublicOrPrivateHospital();
        cout << endl << "\t\t\tHospital's Services          : " << KidneyHospital::getServices();
        cout << endl << "\t\t\tHospital's Treatment Type    : " << KidneyHospital::getTreatmentType() << endl;
        cout<<endl<<"\t\t\t************************************************************************************";
    }


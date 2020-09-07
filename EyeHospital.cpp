#include<iostream>
#include"EyeHospital.h"
using namespace std;

    //Default Constructer
    EyeHospital::EyeHospital()
    {

    }
        //Over Loaded Constructer
    EyeHospital::EyeHospital(double EyeHid,string EyeHName, string EyeHAddress,string EyeHosSize,string EyeHosOwnership,string EyeServices,string EyeTreatType, int EyeHosTotalDtrs)
    {
        this->id = EyeHid;
        this->name = EyeHName;
        this->address = EyeHAddress;
        this->sizeOfHos = EyeHosSize;
        this->Ownership = EyeHosOwnership;
        this->services = EyeServices;
        this->treatmentType = EyeTreatType;
        this->DocComposition.TotalDocctors = EyeHosTotalDtrs;
    }

    void EyeHospital::setSizeOfHos(string d)
    {
        this->sizeOfHos = d;
    }
    string EyeHospital::getSizeOfHos()
    {
        return sizeOfHos;
    }

    void EyeHospital::setServices(string f)
    {
        this->services = f;
    }
    string EyeHospital::getServices()
    {
        return services;
    }

    void EyeHospital::setTreatmentType(string g)
    {
        this->treatmentType = g;
    }
    string EyeHospital::getTreatmentType()
    {
        return treatmentType;
    }

    void EyeHospital::DisplayData()
    {
        cout<<endl<<endl<<"\t\t\t************************************************************************************";
        cout<<endl<<"\t\t\tHospital's Registration No.  : "<<Patient::getid();
        cout<<endl<<"\t\t\tHospital's Name              : "<<Patient::name;
        cout<<endl<<"\t\t\tHospital's Location          : "<<Patient::getaddress();
        cout<<endl<<"\t\t\tHospital's Size              : "<<EyeHospital::getSizeOfHos();
        cout<<endl<<"\t\t\tHospital's Ownership         : "<<Hospital::getPublicOrPrivateHospital();
        cout<<endl<<"\t\t\tHospital's Services          : "<<getServices();
        cout<<endl<<"\t\t\tHospital's Treatment Type    : "<<getTreatmentType()<<endl;
        cout<<endl<<endl<<"\t\t\t************************************************************************************";
    }


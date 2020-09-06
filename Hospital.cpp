#include<iostream>
#include"Hospital.h"
using namespace std;

    //Default Constructer
Hospital::Hospital()
    {

    }

    // Overloaded Constructer
    Hospital::Hospital(double RgNo,string HName,string HAddress,string porph)
    {
    this->id = RgNo;
    this->name=HName;
    this->address=address;
    this->Ownership=porph;
    }

    void Hospital::setPublicOrPrivateHospital(string porph)
    {
        this->Ownership=porph;
    }
    string Hospital::getPublicOrPrivateHospital()
    {
        return Ownership;
    }

    void Hospital::DisplayData()
    {
        cout<<endl<<"\t\t\t*************************************************";
        cout<<endl<<"\t\t\t**************Hospital Information***************";
        cout<<endl<<endl<<"\t\t\tRegistration Number : "<<Patient::id;
        cout<<endl<<"\t\t\tName : "<<Patient::name;
        cout<<endl<<"\t\t\tAddress : "<<Patient::address;
        cout<<endl<<"\t\t\tOwnership : "<<Hospital::Ownership;
        cout<<endl<<"\t\t\t*************************************************";

    }



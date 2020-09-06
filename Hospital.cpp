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
        Ownership=porph;
    }
    string Hospital::getPublicOrPrivateHospital()
    {
        return Ownership;
    }

    void Hospital::DisplayData()
    {
        cout<<endl<<"\t\t\t*************************************************";
        cout<<endl<<"\t\t\t**************Hospital Information***************";
        cout<<endl<<endl<<"Registration Number : "<<Patient::id;
        cout<<endl<<"Name : "<<Patient::name;
        cout<<endl<<"Address : "<<Patient::address;
        cout<<endl<<"Ownership : "<<Hospital::address;
        cout<<endl<<"\t\t\t*************************************************";

    }

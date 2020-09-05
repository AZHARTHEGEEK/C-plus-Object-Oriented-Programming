#include<iostream>
#include"Hospital.h"
using namespace std;

    //Default Constructer
    Hospital::Hospital()
    {

    }
    // Overloaded Constructer
    Hospital::Hospital(double RgNo,string HName,string HAddress)
    {
    this->HospitalRegistrationNumber=RgNo;
    this->HospitalName=HName;
    this->Address=HAddress;
    }

    void Hospital::setHospitalRegistrationNumber(double RgNo)
    {
        this->HospitalRegistrationNumber=RgNo;
    }
    double Hospital::getHospitalRegistrationNumber()
    {
        return HospitalRegistrationNumber;
    }

    void Hospital::setHospitalName(string HName)
    {
        this->HospitalName=HName;
    }
    string Hospital::getHospitalName()
    {
        return HospitalName;
    }

    void Hospital::setAddress(string HAddress)
    {
        this->Address=HAddress;
    }
    string Hospital::getAddress()
    {
        return Address;
    }

    void Hospital::DisplayData()
    {
        cout<<endl<<"\t\t\t*************************************************";
        cout<<endl<<"\t\t\t**************Hospital Information***************";
        cout<<endl<<endl<<"Registration Number : "<<Hospital::HospitalRegistrationNumber;
        cout<<endl<<"Name : "<<Hospital::HospitalName;
        cout<<endl<<"Address : "<<Hospital::Address;
        cout<<endl<<"\t\t\t*************************************************";

    }

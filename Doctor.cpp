#include<iostream>
#include"Doctor.h"
using namespace std;
//Default Constructer
    Doctor::Doctor()
    {

    }
    //Over Loaded Constructer
    Doctor::Doctor(string DocName, string Spe, int DocGrade,int DocCharges)//,//int TDoctors)
    {
        this->name = DocName;
        this->specialization = Spe;
        this->grade = DocGrade;
        this->charges=DocCharges;
        //this->TotalDocctors= TDoctors;
    }

    void Doctor::setSpecialization(string Spe)
    {
        this->specialization = Spe;
    }
    string Doctor::getSpecialization()
    {
        return specialization;
    }

    void Doctor::setGrade(int DocGrade)
    {
        this->grade = DocGrade;
    }
    int Doctor::getGrade()
    {
        return grade;
    }


    void Doctor::setTotalDoctrs(int TDoctors)
    {
        this->TotalDocctors = TDoctors;
    }

    int Doctor::getTotalDoctrs()
    {
        return TotalDocctors;
    }
    void Doctor::setcharges(int DocCharges)
    {
       this->charges = DocCharges;
    }
    int Doctor::geycharges()
    {
        return charges;
    }


    void Doctor::DisplayData()
    {
        //cout<<endl<<endl<<"\t\t\t************************************************************************************";
              //cout<<endl<<"\t\t\t                           Doctor Information"<<endl;
              cout<<endl<<"\t\t\t************************************************************************************";
        cout<<endl<<"\t\t\tDoctor Name             : "<<Patient::name;
        cout<<endl<<"\t\t\tDoctor's Specialization : "<<Doctor::specialization;
        cout<<endl<<"\t\t\tGrade                   : "<<Doctor::grade;
        cout<<endl<<"\t\t\tDoctor Charges          : " << Doctor::charges<<endl;
        cout<<endl<<"\t\t\t************************************************************************************";
    }

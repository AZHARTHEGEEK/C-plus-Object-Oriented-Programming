#include<iostream>
#include"Doctor.h"
using namespace std;

    Doctor::Doctor()
    {

    }
    Doctor::Doctor(string DocName, string Spe, int DocGrade,int DocCharges,int TDoctors)
    {
        this->name = DocName;
        this->specialization = Spe;
        this->grade = DocGrade;
        this->charges=DocCharges;
        this->TotalDocctors= TDoctors;
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
        cout<<endl<<"\t\t\t\t\tDoctor Name: \t\t\t"<<name;
        cout<<endl<< "\t\t\t\t\tDoctor's Specialization:\t"<<specialization;
        cout<<endl<< "\t\t\t\t\Grade: \t\t\t\t"<<grade<<endl;
        cout << endl << "\t\t\t\t\t Doctor Charges: \t\t\t" << charges;
    }

#include<iostream>
#include"Disease.h"
using namespace std;

    //Default Constructer
    Disease::Disease()
    {

    }
    // Overloaded Constructer
    Disease::Disease(string Dname,string Dlevel,string Dcategory,string PDsease)
    {
        this->NameofDesease = Dname;
        this->SeveritLevel = Dlevel;
        this->category = Dcategory;
        this->pastdesease=PDsease;

    }

    void Disease::setNameofDesease(string Dname)
    {
        this->NameofDesease = Dname;
    }
    string Disease::getNameofDesease()
    {
        return NameofDesease;
    }

    void Disease::setSeveritLevel(string Dlevel)
    {
        this->SeveritLevel = Dlevel;
    }
    string Disease::getSeveritLevel()
    {
        return SeveritLevel;
    }

    void Disease::setCategory(string Dcategory)
    {
        this->category = Dcategory;
    }
    string Disease::getCategory()
    {
        return category;
    }

    void Disease::setpastdesease(string pd)
    {
        this->pastdesease=pd;
    }
    string Disease::getpastdesease()
    {
        return pastdesease;
    }
    void Disease::DisplayData()
    {
        cout<<endl<<"\t\t\t*************************************************";
        cout<<endl<<"\t\t\t**************Disease Information***************";
        cout<<endl<<"\t\t\tDisease Name:\t\t\t"<<Disease::NameofDesease;
        cout<<endl<<"\t\t\tDisease Category:\t\t"<<Disease::category;
        cout<<endl<<"\t\t\tDisease Severity Level:\t\t\t"<<Disease::SeveritLevel;
        cout<<endl<<"\t\t\tPast Disease : "<< Disease::pastdesease;
        cout<<endl<<"\t\t\t*************************************************";
    }


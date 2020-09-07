#ifndef included_PATIENT_H
#define included_PATIENT_H
#include"Disease.h"
using namespace std;
class Patient : public Disease
{
public:
    double id;
    string name;
    string address;
    string contactnumber;
    string email;
    int age;
    string sex;
    string blood_group;
    string pastdata;

public:
    //Default Constructer
    Patient();

    //OverLoaded Constructer
    Patient(double ,string ,string ,string ,string ,int ,string ,string,string,string,string,string);


    void setid(double);
    double getid();

    void setName(string);
    string getName();

    void setaddress(string);
    string getaddress();

    void setcontactnumber(string);
    string getcontactnumber();

    void setemail(string);
    string getemail();

    void setage(int);
    int getage();

    void setsex(string);
    string getsex();

    void setblood_group(string);
    string getblood_group();

    void setpastdata(string);
    string getpastdata();

    void DisplayData();

};
#endif // included_PATIENT_H

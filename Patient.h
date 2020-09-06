#ifndef included_PATIENT_H
#define included_PATIENT_H
using namespace std;
class Patient
{
public:
    double id;
    string name;
    string address;
    double contactnumber;
    string email;
    int age;
    string sex;
    string blood_group;




public:
    //Default Constructer
    Patient();

    //OverLoaded Constructer
    Patient(double,string,string,double,string,int,string,string);



    void setid(double);
    double getid();

    void setpatientname(string);
    string getpatientname();

    void setaddress(string);
    string getaddress();

    void setcontactnumber(double);
    double getcontactnumber();

    void setemail(string);
    string getemail();

    void setage(int);
    int getage();

    void setsex(string);
    string getsex();

    void setblood_group(string);
    string getblood_group();


    void DisplayData();


};
#endif // included_PATIENT_H

#ifndef included_HOSPITAL_H
#define included_HOSPITAL_H
using namespace std;

class Hospital
{
private:
    double HospitalRegistrationNumber;
    string HospitalName;
    string Address;

public:
    //Default Constructer
    Hospital();
    // Overloaded Constructer
    Hospital(double,string,string);

    void setHospitalRegistrationNumber(double);
    double getHospitalRegistrationNumber();

    void setHospitalName(string);
    string getHospitalName();

    void setAddress(string);
    string getAddress();

    void DisplayData();
};

#endif // included_HOSPITAL_H

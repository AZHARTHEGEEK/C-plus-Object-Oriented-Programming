#include <iostream>
#include <vector>
#include"Doctor.h"
#include"Patient.h"
#include"Hospital.h"
#include"EyeHospital.h"
#include"KidneyHospital.h"
#include"Disease.h"

using namespace std;

int main()
{
    cout<<endl<<endl<<"\t\t\t************************************************************************************";
          cout<<endl<<"\t\t\t         CSC 104 OBJECT-ORIENTED PROGRAMMING (OOP) FINAL EXAM (SPRING 2020)  "<<endl;
                cout<<"\t\t\t************************************************************************************";
    cout<<endl<<endl<<"\t\t\tName of Student :Muhammad Azhar";
          cout<<endl<<"\t\t\tID : CSC-19F-069"<<endl;
                cout<<"\t\t\tSection : 2B";
          cout<<endl<<"\t\t\tDepartment: Computer Science";
          cout<<endl<<"\t\t\tProgram: BS(CS)"<<endl;
                cout<<"\t\t\tCourse Instructor: Mr. Zubair uddin Shaikh"<<endl;


    cout<<endl<<endl<<"\t\t\tSelect An Option to Select a Management System:"<<endl<<endl;

    cout<<"\t\t\t 1) Hospital Management System"<<endl;
    cout<<"\t\t\t 2) Cricket Management System"<<endl;

    cout<<endl<<endl<<"\t\t\tEnter your Selected Management System Number To Continue : ";char switchtoManagementSystem;
    cin>>switchtoManagementSystem;
    if (switchtoManagementSystem == '1')
    {
    system("CLS");
    vector<EyeHospital> EyeHospitalUsingVector;
    vector<KidneyHospital> KidneyHospitalUsingVector;
    vector<Doctor> Dctr;
    vector<Patient> Ptnt;
    vector<Disease> Dis;
//string Dname,string Dlevel,string Dcategory,string PDsease
    Disease Disease_1("Dengue Fever","Normal","Undifferentiated Fever");
    Dis.push_back(Disease_1);

    Disease Disease_2("Tuberculosis","Exposure","lung disease");
    Dis.push_back(Disease_2);

    Disease Disease_3("Coronary artery (CAD)","Stage A,","Microvascular");
    Dis.push_back(Disease_3);

    Disease Disease_4(Disease_3);
    Dis.push_back(Disease_4);

  cout<<endl<<endl<<"\t\t\t************************************************************************************";
         cout<<endl<<"\t\t\t                          HOSPITAL MANAGEMENT SYSTEM                                ";
         cout<<endl<<"\t\t\t************************************************************************************";
/////,string pemail,int patientage,string psex,string bg
    Patient Patient_1(1001,"Mifzal","Khamosh Colony Block D","03120001478","mifzal567@hotmail.com",23,"Male","B-","Nill",Disease_1.getNameofDesease(),Disease_1.getCategory(),Disease_1.getSeveritLevel());
    Ptnt.push_back(Patient_1);

    Patient Patient_2(1002,"Saad","Nazimabad No 2 Block H","03150045879","saaddesigner@hotmail.com",20,"Male","O-","Diabetes",Disease_2.getNameofDesease(),Disease_2.getCategory(),Disease_2.getSeveritLevel());
    Ptnt.push_back(Patient_2);

    Patient Patient_3(1003,"Reham Khan","DHA Phase 2","03124564785","rehamprincess786@gmail.com",30,"Fe-Male","A+","Blood Pressure",Disease_3.getNameofDesease(),Disease_3.getCategory(),Disease_3.getSeveritLevel());
    Ptnt.push_back(Patient_3);

    Patient Patient_4(Patient_3);
    Ptnt.push_back(Patient_4);
    int a=0,b=0,c=0,d=0;
    cout<<endl<<endl<<"\t\t\t************************************************************************************";
          cout<<endl<<"\t\t\t                                  Patient's Data                                     ";
          cout<<endl<<"\t\t\t************************************************************************************";
          cout<<endl<<"\t\t\tNumber of Registered Patients : "<<Ptnt.size() << endl << endl;
    a = Ptnt.size();
    for( int i = 0; i < a; i++)
    {
        cout<<endl<<"\n\t\t\tPatient # "<<i+1;
        Ptnt[i].DisplayData();
    }

    cout<<endl<<"\t\t\tPatient : "<<a<<" 's data is same as Patient : "<<a-1<<" due to copy constructor."<<endl<<endl;




//string DocName, string Spe, int DocGrade,int DocCharges,int TDoctors
    Doctor Dctr_1("Dr. Muhammad Adnan","Surgical Doctor",19,5500);
    Dctr.push_back(Dctr_1);

    Doctor Dctr_2("Dr. Muhammad Adnan","Surgical Doctor",19,5500);
    Dctr.push_back(Dctr_2);
    Doctor Dctr_3(Dctr_2);
    Dctr.push_back(Dctr_3);

       cout<<endl<<endl<<"\t\t\t************************************************************************************";
             cout<<endl<<"\t\t\t                                  Doctors's Data                                       ";
             cout<<endl<<"\t\t\t***************************************************************************************";
       cout<<endl<<endl<<"\t\t\tNumber of Registered Doctors : "<<Dctr.size() << endl << endl;
    b = Dctr.size();
    Doctor Dctr_Obj;
    Dctr_Obj.setTotalDoctrs(b);
    for( int i = 0; i < b; i++)
    {
        cout<<endl<<"\t\t\tDoctor : "<<i+1<<endl;
        Dctr[i].DisplayData();
    }

    cout<<endl<<"\t\t\tDoctor : "<<b<<" 's data is same as Doctor : "<<b-1<<" due to copy constructor.\n\n";

    EyeHospital EyeHospitalpital_1(4563,"National Institute of Cardiovascular Diseases (NICVD)","Karachi","Medium","Public","Thallium Scan, Angiography and Echocardiography (ECHO)","Acute and Long-term Treatment",b);
    EyeHospitalUsingVector.push_back(EyeHospitalpital_1);
    EyeHospital EyeHospitalpital_2(EyeHospitalpital_1);
    EyeHospitalUsingVector.push_back(EyeHospitalpital_2);

   cout<<endl<<endl<<"\t\t\t************************************************************************************";
         cout<<endl<<"\t\t\t                                  Eye Hospital's Data                                     ";
         cout<<endl<<"\t\t\t************************************************************************************";
   cout<<endl<<endl<<"\t\t\tNumber of Registered Hospitals : "<<EyeHospitalUsingVector.size() << endl << endl;
    c = EyeHospitalUsingVector.size();
    for( int i = 0; i < c; i++)
    {
        cout<<endl<<"\t\t\tHospital : "<<i+1<<endl;
        EyeHospitalUsingVector[i].DisplayData();
    }
    cout<<endl<<"\t\t\tHospital : "<<c<<" 's data is same as Hospital : "<<c-1<<" due to copy constructor.\n\n";

    KidneyHospital ChildrenHospital_1(88569,"National Children Hospital","Karachi","Large","Public","Allergy, Apherisi, Audiology & Brain Treatment","Acute and Long-term Treatment",c );
    KidneyHospitalUsingVector.push_back(ChildrenHospital_1);
    KidneyHospital ChildrenHospital_2(ChildrenHospital_1);
    KidneyHospitalUsingVector.push_back(ChildrenHospital_2);

cout<<endl<<endl<<"\t\t\t************************************************************************************";
      cout<<endl<<"\t\t\t                            Kidney Hospital's Data                                  ";
      cout<<endl<<"\t\t\t************************************************************************************";
cout<<endl<<endl<<"\t\t\tNumber of Registered Hospitals : "<<KidneyHospitalUsingVector.size() << endl << endl;
    d = KidneyHospitalUsingVector.size();
    for( int i = 0; i < d; i++)
    {
        cout<<endl<<"\t\t\tHospital # "<<i+1<<endl;
        KidneyHospitalUsingVector[i].displayData();
    }
    cout<<endl<<"\t\t\tHospital : "<<d<<" 's data is same as Hospital : "<<d-1<<" due to copy constructor.\n\n";

    }

    else if (switchtoManagementSystem == '2')
    {
        system("CLS");
        //cricketManagementSystem();


    }
    else
    {
        cout << endl << "\t\tYou have pressed a wrong key!\n\n\n";

    }


    return 0;
}

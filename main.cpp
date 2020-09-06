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

    vector<EyeHospital> CarHos;
    vector<KidneyHospital> ChlHos;
    vector<Doctor> Dctr;
    vector<Patient> Ptnt;
    vector<Disease> Dis;
//string Dname,string Dlevel,string Dcategory,string PDsease
    Disease Disease_1("Diabetes","Critical","Type 1 Diabetes","Nill");
    Dis.push_back(Disease_1);

    Disease Disease_2("Cancer","Stage II","leukemia","Sughar");
    Dis.push_back(Disease_2);

    Disease Disease_3("Hepatitis C","Stage I","Hepatitis","Blood Pressure");
    Dis.push_back(Disease_2);

    Disease Disease_4(Disease_3);
    Dis.push_back(Disease_4);


    char classselection;
    cout<<endl<<endl<<"\t\t\t************************************************************************************";
    cout<<endl<<endl<<"\t\t\t         CSC 104 OBJECT ORIENTED PROGRAMMING (OOP) FINAL EXAM (SPRING 2020)"<<endl;
          cout<<endl<<"\t\t\t************************************************************************************";

   //cout<<endl<<endl<<"\t\t\t************************************************************************************";
         cout<<endl<<"\t\t\t                          HOSPITAL MANAGEMENT SYSTEM                                ";
         //cout<<endl<<"\t\t\t************************************************************************************";
/////,string pemail,int patientage,string psex,string bg
    Patient Patient_1(8745,"Ali Khan","DHA Phase 2","03120001478","azhar567@hotmail.com",29,"Male","B+");
    Ptnt.push_back(Patient_1);

    Patient Patient_2(874598,"Ali Khan","DHA Phase 2","03120001478","azhar567@hotmail.com",29,"Male","B+");
    Ptnt.push_back(Patient_2);

    Patient Patient_3(874598,"Ali Khan","DHA Phase 2","03120001478","azhar567@hotmail.com",29,"Male","B+");
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
    for(unsigned int i = 0; i < b; i++)
    {
        cout<<endl<<"\t\t\tDoctor : "<<i+1<<endl;
        Dctr[i].DisplayData();
    }

    cout<<endl<<"\t\t\t\Doctor : "<<b<<" 's data is same as Doctor : "<<b-1<<" due to copy constructor.\n\n";

    EyeHospital EyeHospitalpital_1(4563,"National Institute of Cardiovascular Diseases (NICVD)","Karachi","Medium","Public","Thallium Scan, Angiography and Echocardiography (ECHO)",b);
    CarHos.push_back(EyeHospitalpital_1);
    EyeHospital EyeHospitalpital_2(EyeHospitalpital_1);
    CarHos.push_back(EyeHospitalpital_2);

   cout<<endl<<endl<<"\t\t\t************************************************************************************";
         cout<<endl<<"\t\t\t                                  Eye Hospital's Data                                     ";
         cout<<endl<<"\t\t\t************************************************************************************";
   cout<<endl<<endl<<"\t\t\tNumber of Registered Hospitals : "<<CarHos.size() << endl << endl;
    c = CarHos.size();
    for(unsigned int i = 0; i < c; i++)
    {
        cout<<endl<<"\t\t\tHospital : "<<i+1<<endl;
        CarHos[i].DisplayData();
    }
    cout<<endl<<"\t\t\tHospital : "<<c<<" 's data is same as Hospital : "<<c-1<<" due to copy constructor.\n\n";

    KidneyHospital ChildrenHospital_1(88569,"National Children Hospital","Karachi","Large","Public","Allergy, Apherisi, Audiology & Brain Treatment","Acute and Long-term Treatment" );
    ChlHos.push_back(ChildrenHospital_1);
    KidneyHospital ChildrenHospital_2(ChildrenHospital_1);
    ChlHos.push_back(ChildrenHospital_2);

cout<<endl<<endl<<"\t\t\t************************************************************************************";
      cout<<endl<<"\t\t\t                            Kidney Hospital's Data                                  ";
      cout<<endl<<"\t\t\t************************************************************************************";
cout<<endl<<endl<<"\t\t\tNumber of Registered Hospitals : "<<ChlHos.size() << endl << endl;
    d = ChlHos.size();
    for(unsigned int i = 0; i < d; i++)
    {
        cout<<endl<<"\t\t\tHospital # "<<i+1<<endl;
        ChlHos[i].displayData();
    }
    cout<<endl<<"\t\t\tHospital : "<<d<<" 's data is same as Hospital : "<<d-1<<" due to copy constructor.\n\n";

    }
/*

    else if (classselection == '2')
    {
        system("CLS");
        //cricketManagementSystem();


    }
    else
    {
        cout << endl << "\t\tYou have pressed a wrong key!\n\n\n";

    }

*/
   /* Doctor Dctr1("Dr. Muhammad Adnan","Surgical Doctor",19);
    Doctor Dctr2(Dctr1);
    Dctr2.displayData();

    Patient Ptnt1(874598,"Ali Khan",29);
    Patient Ptnt2(Ptnt1);
    Ptnt2.displayData();

    Hospital Hsptl1(748596,"Karachi Public Hospital","Saudabad Karachi");
    Hospital Hsptl2 = Hsptl1;
    Hsptl2.displayData();

    Disease Dis1("Diabetes","Critical","Type 1 Diabetes");
    Disease Dis2 = Dis1;
    Dis2.displayData();

    EyeHospital CarHos1(4563,"National Institute of Cardiovascular Diseases (NICVD)","Karachi","Medium","Public","Thallium Scan, Angiography and Echocardiography (ECHO)");
    EyeHospital CarHos2(CarHos1);
    CarHos2.displayData();

    EyeHospital ChlHos1(88569,"National Children Hospital","Karachi","Large","Public","Allergy, Apherisi, Audiology & Brain Treatment","Acute and Long-term Treatment");
    EyeHospital ChlHos2 = ChlHos1;
    ChlHos2.displayData();*/

    return 0;
}

#include<iostream>
#include<vector>
#include"Doctor.h"
#include"Patient.h"
#include"Hospital.h"
#include"EyeHospital.h"
#include"KidneyHospital.h"
#include"Disease.h"
#include"Team.h"
#include"Match.h"
#include"Venue.h"
#include"Player.h"

using namespace std;

int main()
{
    system("CLS");
    cout<<endl<<endl<<"\t\t\t************************************************************************************";
          cout<<endl<<"\t\t\t          OBJECT-ORIENTED PROGRAMMING (OOP) FINAL EXAMINATION (SPRING 2020)         "<<endl;
                cout<<"\t\t\t************************************************************************************";
    cout<<endl<<endl<<"\t\t\tName of Student   : Muhammad Azhar";
          cout<<endl<<"\t\t\tID                : CSC-19F-069"<<endl;
                cout<<"\t\t\tSection           : 2B";
          cout<<endl<<"\t\t\tProgram           : BS(CS)"<<endl;
                cout<<"\t\t\tCourse Instructor : Mr. Zubair uddin Shaikh"<<endl;


    cout<<endl<<endl<<"\t\t\tSelect An Option to Select a Management System:"<<endl<<endl;

    cout<<"\t\t\t 1) Hospital Management System"<<endl;
    cout<<"\t\t\t 2) Cricket Management System"<<endl;

    cout<<endl<<endl<<"\t\t\tEnter : ";char switchtoManagementSystem;
    cin>>switchtoManagementSystem;
    if (switchtoManagementSystem == '1')
    {
    system("CLS");
    vector<EyeHospital> EyeHospitalUsingVector;
    vector<KidneyHospital> KidneyHospitalUsingVector;
    vector<Doctor> DoctorsVector;
    vector<Patient> PatientVector;
    vector<Disease> DiseaseVector;

    Disease FirstDisease("Dengue Fever","Normal","Undifferentiated Fever");
    DiseaseVector.push_back(FirstDisease);

    Disease SecondDisease("Tuberculosis","Exposure","lung Disease");
    DiseaseVector.push_back(SecondDisease);

    Disease ThirdDisease("Coronary artery (CAD)","Stage A,","Microvascular");
    DiseaseVector.push_back(ThirdDisease);
    //Copy Constructor
    Disease Fouth_Disease_using_Copy_Constructer(ThirdDisease);
    DiseaseVector.push_back(Fouth_Disease_using_Copy_Constructer);

  cout<<endl<<endl<<"\t\t\t************************************************************************************";
         cout<<endl<<"\t\t\t                          HOSPITAL MANAGEMENT SYSTEM                                ";
         cout<<endl<<"\t\t\t************************************************************************************";

    Patient Patient_1_OBJ(1001,"Mifzal","Khamosh Colony Block D","03120001478","mifzal567@hoTeamVectorail.com",23,"Male","B-","Nill",FirstDisease.getNameofDesease(),FirstDisease.getCategory(),FirstDisease.getSeveritLevel());
    PatientVector.push_back(Patient_1_OBJ);

    Patient Patient_2_OBJ(1002,"Saad","Nazimabad No 2 Block H","03150045879","saaddesigner@hoTeamVectorail.com",20,"Male","O-","Diabetes",SecondDisease.getNameofDesease(),SecondDisease.getCategory(),SecondDisease.getSeveritLevel());
    PatientVector.push_back(Patient_2_OBJ);

    Patient Patient_3_OBJ(1003,"Reham Khan","DHA Phase 2","03124564785","rehamprincess786@gmail.com",30,"Fe-Male","A+","Blood Pressure",ThirdDisease.getNameofDesease(),ThirdDisease.getCategory(),ThirdDisease.getSeveritLevel());
    PatientVector.push_back(Patient_3_OBJ);
    //Copy Constructor
    Patient Patient_4_OBJ_using_Copy_Constructor(Patient_3_OBJ);
    PatientVector.push_back(Patient_4_OBJ_using_Copy_Constructor);

    cout<<endl<<endl<<"\t\t\t************************************************************************************";
          cout<<endl<<"\t\t\t                                  Patient's Data                                     ";
          cout<<endl<<"\t\t\t************************************************************************************";
          cout<<endl<<"\t\t\tNumber of Registered Patients : "<<PatientVector.size() << endl << endl;int a=0;
    //Object Counter
    a = PatientVector.size();
    for( int i = 0; i < a; i++)
    {
        cout<<endl<<"\n\t\t\tPatient : "<<i+1;
        PatientVector[i].DisplayData();
    }

    cout<<endl<<"\t\t\tPatient : "<<a<<" 's data is same as Patient : "<<a-1<<" due to copy constructor."<<endl<<endl;


//                            (string DocName, string Spe, int DocGrade,int DocCharges,int TDoctors)
    Doctor Doctor_1_DataVector("Dr. Muhammad Mehmood","General Practitioner",16,550);
    DoctorsVector.push_back(Doctor_1_DataVector);

    Doctor Doctor_2_DataVector("Dr. Muhammad Ali","Neurologists",18,5500);
    DoctorsVector.push_back(Doctor_2_DataVector);

    Doctor Doctor_3_DataVector("Dr. Afia","Dermatologists",19,10000);
    DoctorsVector.push_back(Doctor_3_DataVector);
    //Copy Constructor
    Doctor Doctor_4_DataVector(Doctor_3_DataVector);
    DoctorsVector.push_back(Doctor_4_DataVector);
    // Data Dispaly
       cout<<endl<<endl<<"\t\t\t************************************************************************************";
             cout<<endl<<"\t\t\t                                  Doctors's Data                                       ";
             cout<<endl<<"\t\t\t***************************************************************************************";
       cout<<endl<<endl<<"\t\t\tNumber of Registered Doctors : "<<DoctorsVector.size() << endl << endl;int b=0;
    b = DoctorsVector.size();
    Doctor Doctor_Obj_Counter;
    Doctor_Obj_Counter.setTotalDoctrs(b);
    for( int i = 0; i < b; i++)
    {
        cout<<endl<<"\t\t\tDoctor : "<<i+1;
        DoctorsVector[i].DisplayData();
    }
    cout<<endl<<"\t\t\tDoctor : "<<b<<" 's data is same as Doctor : "<<b-1<<" data due to copy constructor.\n\n";

    EyeHospital EyeHopital_1_Obj(78598,"Hashmanis Eye Hospital","Karachi Sindh","Medium","Private","All Types Related to Eye", "Femto Lasik and Femto Cataract Surgery",b);
    EyeHospitalUsingVector.push_back(EyeHopital_1_Obj);
    //Copy Constructor
    EyeHospital EyeHopital_2_Obj(EyeHopital_1_Obj);
    EyeHospitalUsingVector.push_back(EyeHopital_2_Obj);

   cout<<endl<<endl<<"\t\t\t************************************************************************************";
         cout<<endl<<"\t\t\t                                  Eye Hospital's Data                                     ";
         cout<<endl<<"\t\t\t************************************************************************************";
   cout<<endl<<endl<<"\t\t\tNumber of Registered Hospitals : "<<EyeHospitalUsingVector.size() << endl << endl;int c;
    //object counter
    c = EyeHospitalUsingVector.size();
    for( int i = 0; i < c; i++)
    {
        cout<<endl<<"\t\t\tData : "<<i+1<<endl;
        EyeHospitalUsingVector[i].DisplayData();
    }
    cout<<endl<<"\n\t\t\tData : "<<c<<" 's data is same as Data : "<<c-1<<" due to copy constructor.";

    KidneyHospital ChildrenHospital_1(0656,"Sindh Institute of Urology and Transplantation (SIUT)","Karachi","Large","Public"
                                      ,"Related to Lungs","Treatment of Urological and Nephrological Aliments\n\t\t\t\t\t\t\t, Oncological Treatments, Treatments of Hepatic\n\t\t\t\t\t\t\t and Gastrointestinal diseases, and Organ Transplantation",c );
    KidneyHospitalUsingVector.push_back(ChildrenHospital_1);
    //Copy Constructor
    KidneyHospital ChildrenHospital_2(ChildrenHospital_1);
    KidneyHospitalUsingVector.push_back(ChildrenHospital_2);

cout<<endl<<endl<<"\t\t\t************************************************************************************";
      cout<<endl<<"\t\t\t                            Kidney Hospital's Data                                  ";
      cout<<endl<<"\t\t\t************************************************************************************";
cout<<endl<<endl<<"\t\t\tNumber of Registered Hospitals : "<<KidneyHospitalUsingVector.size() << endl << endl;int d = 0;
    d = KidneyHospitalUsingVector.size();
    for( int i = 0; i < d; i++)
    {
        cout<<endl<<"\t\t\tData : "<<i+1<<endl;
        KidneyHospitalUsingVector[i].DisplayData();
    }
    cout<<endl<<"\n\t\t\tData : "<<d<<" 's data is same as Data : "<<d-1<<" due to copy constructor.";

    }

//#########################################################################################################################################
//#########################################################################################################################################
//#########################################################################################################################################
//#########################################################################################################################################

    else if (switchtoManagementSystem == '2')
    {
    int a=0,b=0,c=0,d=0;

    vector<Team> TeamVector;
    vector<Match> Mtch;
    vector<Venue> Vnu;
    vector<Player> Plyr;
//    vector<OneDayMatch> OneDay;
  //  vector<T20Match> T20;
  //  vector<TesTeamVectoratch> Test;

    cout<<endl<<endl<<"\t\t\t************************************************************************************";
               cout<<endl<<"\t\t\t         OBJECT ORIENTED PROGRAMMING (OOP) FINAL EXAM (SPRING 2020)"<<endl;
               cout<<"\t\t\t*************************************************************************************";
    cout<<endl;
    cout<<endl<<endl<<"\t\t\t************************************************************************************";
          cout<<endl<<"\t\t\t                         CRICKET MANAGEMENT SYSTEM "<<endl;
                cout<<"\t\t\t************************************************************************************";

    Venue Venue_1("National Stadium","Karachi, Pakistan",25000,352);
    Vnu.push_back(Venue_1);

    Venue Venue_2("Gaddafi Stadium","Lahore, Pakistan",35000,518);
    Vnu.push_back(Venue_2);

    Venue Venue_3(Venue_2);
    Vnu.push_back(Venue_3);
                cout<<endl<<"\t\t\t************************************************************************************";
                cout<<endl<<"                                    Venue's Data";
                      cout<<"\t\t\t************************************************************************************";
    cout<<endl<<"\t\t\tNumber of Registered Venues : "<<Vnu.size() << endl << endl;
    a = Vnu.size();
    for( int i = 0; i < a; i++)
    {
        cout<<endl<<"\t\t\tVenue : "<<i+1<<endl;
        Vnu[i].DisplayData();
    }

    cout<<endl<<"\t\t\tVenue # "<<a<<" 's data is same as Venue : "<<a-1<<"data due to copy constructor.\n\n";




    Match Match_1("One Day International","Pakistan","England",false,true,false);
    Mtch.push_back(Match_1);

    Match Match_2("T20 International","Pakistan","West Indies",false,true,false);
    Mtch.push_back(Match_2);

    Match Match_3("International Test Match","Pakistan","India",true,false,false);
    Mtch.push_back(Match_3);

    Match Match_4(Match_3);
    Mtch.push_back(Match_4);

    cout<<endl<<"\t\t\t************************************************************************************";
    cout<<endl<<"\t\t\t                                 Matches' Data";
    cout<<"\t\t\t************************************************************************************";
    cout<<endl<<"\t\t\tNumber of Scheduled Matches : "<<Mtch.size() << endl << endl;
    b = Mtch.size();
    for( int i = 0; i < b; i++)
    {
        cout<<endl<<"\t\t\tMatch : "<<i+1<<endl;
        Mtch[i].DisplayData();
    }

    cout<<endl<<"\t\t\tMatch : "<<b<<" 's data is same as Match : "<<b-1<<" data due to copy constructor.\n\n";


    Player Player_1("Babar Ali","Pakistani","Pakistan",141,"Batsman","9th");
    Plyr.push_back(Player_1);

    Player Player_2("Taimoor Hussain","Pakistani","Pakistan",15,"Bowler","158th");
    Plyr.push_back(Player_2);

    Player Player_3("Salman Ali","Pakistani","Pakistan",81,"Batsman","55th");
    Plyr.push_back(Player_3);

    Player Player_4(Player_3);
    Plyr.push_back(Player_4);
    cout<<endl<<"\t\t\t************************************************************************************";
    cout<<endl<<"\t\t\t                                    Players' Data";
    cout<<endl<<"\t\t\t************************************************************************************";
    cout<<endl<<"\t\t\tNumber of Registered Players : "<<Plyr.size() << endl << endl;
    c = Plyr.size();
    for( int i = 0; i < c; i++)
    {
        cout<<endl<<"\t\t\tPlayer : "<<i+1<<endl;
        Plyr[i].DisplayData();
    }

    cout<<endl<<"\t\t\tPlayer : "<<c<<" 's data is same as Player : "<<c-1<<" due to copy constructor.\n\n";

    }
    else
    {
        cout << endl << "\t\tYou have pressed a wrong key!\n\n\n";
    }
    {
}
}

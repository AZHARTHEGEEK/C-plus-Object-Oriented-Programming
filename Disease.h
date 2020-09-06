
#ifndef included_DISEASE_H
#define included_DISEASE_H

using namespace std;
class Disease
{
private:
    string NameofDesease;
    string SeveritLevel;
    string category;
    string pastdesease;
public:
    //Default Constructer
    Disease();
        // Overloaded Constructer
    Disease(string,string,string,string);

    void setNameofDesease(string);
    string getNameofDesease();

    void setSeveritLevel(string);
    string getSeveritLevel();

    void setCategory(string);
    string getCategory();

    void setpastdesease(string);
    string getpastdesease();

    void DisplayData();
};

#endif // included_DISEASE_H


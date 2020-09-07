#ifndef included_DISEASE_H
#define included_DISEASE_H

using namespace std;
class Disease
{
public:
    string NameofDesease;
    string SeveritLevel;
    string category;

    //Default Constructer
    Disease();
    // Overloaded Constructer
    Disease(string,string,string);

    void setNameofDesease(string);
    string getNameofDesease();

    void setSeveritLevel(string);
    string getSeveritLevel();

    void setCategory(string);
    string getCategory();

    void DisplayData();
};

#endif // included_DISEASE_H


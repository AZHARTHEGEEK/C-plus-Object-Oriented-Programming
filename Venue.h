#ifndef included_VENUE_H
#define included_VENUE_H

using namespace std;
class Venue
{
private:
    string name;
    string location;
    double capacity;
    int matchesPlayed;

public:
    Venue();
    Venue(string,string,double,int);

    void setName(string);
    string getName();

    void setLocation(string);
    string getLocation();

    void setCapacity(double);
    double getCapacity();

    void setMatchesPlayed(int);
    int getMatchesPlayed();

    void DisplayData();
};

#endif // included_VENUE_H




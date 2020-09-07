#include<iostream>
#include"Venue.h"
using namespace std;

    Venue::Venue()
    {

    }
    Venue::Venue(string a,string b,double c,int d)
    {
        name = a;
        location = b;
        capacity = c;
        matchesPlayed = d;
    }

    void Venue::setName(string e)
    {
        name = e;
    }
    string Venue::getName()
    {
        return name;
    }

    void Venue::setLocation(string f)
    {
        location = f;
    }
    string Venue::getLocation()
    {
        return location;
    }

    void Venue::setCapacity(double g)
    {
        capacity = g;
    }
    double Venue::getCapacity()
    {
        return capacity;
    }

    void Venue::setMatchesPlayed(int h)
    {
        matchesPlayed = h;
    }
    int Venue::getMatchesPlayed()
    {
        return matchesPlayed;
    }

    void Venue::DisplayData()
    {
        cout << endl << "\t\t\tVenue's Name              :" << getName();
        cout << endl << "\t\t\tVenue's Location          :" << getLocation();
        cout << endl << "\t\t\tCrowd Capacity            : " << getCapacity();
        cout << endl << "\t\t\tTotal Matches Played Here : " << getMatchesPlayed() << endl;
    }

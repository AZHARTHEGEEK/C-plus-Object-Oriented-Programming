#include<iostream>
#include"Team.h"
using namespace std;

    Team::Team()
    {

    }
    Team::Team(string a,string b,string c,int d,int e,int f,int g,int h)
    {
        name = a;
        ranking = b;
        country = c;
        matchesPlayed = d;
        matchesWon = e;
        matchesLost = f;
        matchesTied = g;
        matchesDrawn = h;
    }

    void Team::setName(string a)
    {
        name = a;
    }
    string Team::getName()
    {
        return name;
    }

    void Team::setRanking(string b)
    {
        ranking = b;
    }
    string Team::getRanking()
    {
        return ranking;
    }

    void Team::setCountry(string c)
    {
        country = c;
    }
    string Team::getCountry()
    {
        return country;
    }

    void Team::setMatchesPlayed(int d)
    {
        matchesPlayed = d;
    }
    int Team::getMatchesPlayed()
    {
        return matchesPlayed;
    }

    void Team::setMatchesWon(int e)
    {
        matchesWon = e;
    }
    int Team::getMatchesWon()
    {
        return matchesWon;
    }

    void Team::setMatchesLost(int f)
    {
        matchesLost = f;
    }
    int Team::getMatchesLost()
    {
        return matchesLost;
    }

    void Team::setMatchesTied(int g)
    {
        matchesTied = g;
    }
    int Team::getMatchesTied()
    {
        return matchesTied;
    }

    void Team::setMatchesDrawn(int h)
    {
        matchesDrawn = h;
    }
    int Team::getMatchesDrawn()
    {
        return matchesDrawn;
    }

    void Team::displayData()
    {
        cout << endl << "\t\t\t\t\tTeam's Name    : " << getName();
        cout << endl << "\t\t\t\t\tTeam's Ranking : " << getRanking();
        cout << endl << "\t\t\t\t\tTeam's Country : " << getCountry();
        cout << endl << "\t\t\t\t\tMatches Played : " << getMatchesPlayed();
        cout << endl << "\t\t\t\t\tMatches Won    : " << getMatchesWon();
        cout << endl << "\t\t\t\t\tMatches Lost   : " << getMatchesLost();
        cout << endl << "\t\t\t\t\tMatches Tied   : " << getMatchesTied();
        cout << endl << "\t\t\t\t\tMatches Drawn  : " << getMatchesDrawn() << endl;

    }

#ifndef included_TEAM_H
#define included_TEAM_H

using namespace std;
class Team
{
private:
    string name;
    string ranking;
    string country;
    int matchesPlayed;
    int matchesWon;
    int matchesLost;
    int matchesTied;
    int matchesDrawn;

public:
    Team();
    Team(string,string,string,int,int,int,int,int);

    void setName(string);
    string getName();

    void setRanking(string);
    string getRanking();

    void setCountry(string);
    string getCountry();

    void setMatchesPlayed(int);
    int getMatchesPlayed();

    void setMatchesWon(int);
    int getMatchesWon();

    void setMatchesLost(int);
    int getMatchesLost();

    void setMatchesTied(int);
    int getMatchesTied();

    void setMatchesDrawn(int);
    int getMatchesDrawn();

    void displayData();
};

#endif // included_TEAM_H


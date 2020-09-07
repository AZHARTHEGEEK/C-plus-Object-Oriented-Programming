#ifndef included_PLAYER_H
#define included_PLAYER_H

using namespace std;
class Player
{
private:
    string name;
    string nationality;
    string playFor;
    int matchesPlayed;
    string playerType;
    string playerRanking;

public:
    Player();
    Player(string,string,string,int,string,string);

    void setName(string);
    string getName();

    void setNationality(string);
    string getNationality();

    void setPlayFor(string);
    string GetPlayFor();

    void setMatchesPlayed(int);
    int getMatchesPlayed();

    void setPlayerType(string);
    string getPlayerType();

    void setPlyerRanking(string);
    string getPlayerRanking();

    void DisplayData();
};

#endif // included_PLAYER_H





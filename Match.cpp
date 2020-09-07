#include<iostream>
#include"Match.h"
using namespace std;

    Match::Match()
    {

    }
    Match::Match(string a,string b,string c,bool d,bool e,bool f)
    {


        name = a;
        oponent1 = b;
        oponent2 = c;
        if(d == true)
        {
        isTournament = "Yes";
        }
        else if(d == false)
        {
        isTournament = "No";
        }
        if(e == true)
        {
        isSeries = "Yes";
        }
        else if(e == false)
        {
        isSeries = "No";
        }
        if(f == true)
        {
        isIndependant = "Yes";
        }
        else if(f == false)
        {
        isIndependant = "No";
        }
    }

    void Match::setName(string g)
    {
        name = g;
    }
    string Match::getName()
    {
        return name;
    }

    void Match::setOponent1(string h)
    {
        oponent1 = h;
    }
    string Match::getOponent1()
    {
        return oponent1;
    }

    void Match::setOponent2(string i)
    {
        oponent2 = i;
    }
    string Match::getOponent2()
    {
        return oponent2;
    }

    void Match::setIsTournament(string j)
    {
        isTournament = j;
    }
    string Match::getIsTournament()
    {
        return isTournament;
    }

    void Match::setIsSeries(string k)
    {
        isSeries = k;
    }
    string Match::getIsSeries()
    {
        return isSeries;
    }

    void Match::setIsIndependant(string l)
    {
        isIndependant = l;
    }
    string Match::getIsIndependant()
    {
        return isIndependant;
    }

    void Match::DisplayData()
    {
        cout<<endl << "\t\t\tatch's Name              : " << getName();
        cout<<endl << "\t\t\tTeam 1                   : " << getOponent1();
        cout<<endl << "\t\t\tTeam 2                   : " << getOponent2();
        cout<<endl << "\t\t\tIs Tournament's Match?   : " << getIsTournament();
        cout<<endl << "\t\t\tIs Series's Match?       : " << getIsSeries();
        cout<<endl << "\t\t\tIs Independant Match?    : " << getIsIndependant() << endl;
    }

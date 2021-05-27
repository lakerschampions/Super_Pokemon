#pragma once
#include "State.h"

class Scyzc3Engine;
using namespace std;

class LoadState :
    public State
{
public:
    void Handle(Context* c);
    LoadState(Scyzc3Engine* pEngine);
    ~LoadState();
    void virtSetupBackgroundBuffer();
    void virtMouseDown(int iButton, int iX, int iY);
    int virtInitialiseObjects();
    void virtDrawStringsOnTop();
    void virtKeyDown(int ikeyDown);
    void saveGame(int id);
    void loadInfo(int id);

    void copyAllBackgroundBuffer();


private:
    Scyzc3Engine* m_engine;
    SimpleImage image;
    int p1X[3] = { 0 }, p1Y[3] = { 0 }, p2X[3], p2Y[3], p3X[3], p3Y[3], p4X[3], p4Y[3], hp1[3], hp2[3], hp3[3], hp4[3], mapId[3], s1[3], s2[3], level[3];
    char* time1;
    //string line = NULL;
    //string str1 = NULL, str2 = NULL, str3 = NULL, str4 = NULL, str5 = NULL;

    string linee1 = "No Data";
    string linee2 = "No Data";
    string linee3 = "No Data";
};


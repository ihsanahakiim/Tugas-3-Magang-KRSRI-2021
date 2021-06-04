#ifndef ROBOTKRSRI_H
#define ROBOTKRSRI_H
#include <iostream>

using namespace std;

class attributes
{
private:
    int kaki;
    bool status;
    int* Boneka;
    Boneka = NULL;
    //string name;

public:
    attributes();
    virtual ~attributes();
    string name;

    void nyala(){

    }
    void mati(){

    }
    virtual void jalan(){

    }
};




class RobotKRSRI : public attributes
{
private:
    //int Muhammad_Ihsan_Abdul_Hakim = 16020129;
public:
    RobotKRSRI();
    ~RobotKRSRI();

    void padamkanApi(){
        
    }

    virtual void ambilBoneka(){

    }
    void jalan(){

    }
};

class Boneka : public attributes
{
public:
    Boneka();
    ~Boneka();

    //Boneka operator+(const Boneka& object){
      //  Boneka doll;
        //doll.name = name + object.name;
        //return doll;
    //}
    //int* doll;
    //doll = NULL;
};

Boneka::Boneka()
{
}

Boneka::~Boneka()
{
}


#endif
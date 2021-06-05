#ifndef ROBOTKRSRI_H
#define ROBOTKRSRI_H
#include <iostream>

using namespace std;

class attributes
{
private:
    int kaki;
    bool status;;
    string name;

public:
    attributes();
    virtual ~attributes();

    void setName(string name){
        this->name = name;
    }

    void setStatus(bool status){
        this->status = status;
    }

    string getName(){
        return this->name;
    }
    bool getStatus(){
        return this->status;
    }

    void nyala(){
        this->status = true;
    }
    void mati(){
        this->status = false;
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

    attributes atribut;
    void validMessage(string name){
        cout << name + " Work";
    }
    
    void errorMessage(string name){
        cout << "---STATUS ERROR---" << endl;
    }

    void jalan(){
        if (atribut.setStatus(true) == true){
        atribut.setName("Robot Jalan");
        validMessage(atribut.getName());
        }
    }
    void padamkanApi(){
        if (atribut.getStatus() = true){
        atribut.setName("Padamkan Api");
        validMessage(atribut.getName());
        }
    }

    void ambilBoneka(){
        if (status == true){
        atribut.setName("Ambil Boneka");
        validMessage(atribut.getName());
        }
    }
};

//class Boneka : public RobotKRSRI
//{
//public:
//    string name;
//    Boneka();
//    ~Boneka();

//    Boneka operator+(const Boneka& object){
//        Boneka doll;
//        doll.name = attributes.name + object.name;
//        return doll;
//    }
//    Boneka(const char* teddyBear){
//        this->name = teddyBear;
//    }
//    void ambilBoneka(teddyBear){

//    }


 
//};

//Boneka::Boneka()
//{
//}

//Boneka::~Boneka()
//{
//}


#endif

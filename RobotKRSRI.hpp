#ifndef ROBOTKRSRI_H
#define ROBOTKRSRI_H
#include <iostream>

using namespace std;

//16020129 Muhammad Ihsan Abdul Hakim
class attributes
{
private:
    int kaki;
    bool status;;
    string name;

public:
    attributes();
    virtual ~attributes();

    void setName(string name);
    void setStatus(bool status);
    string getName();
    bool getStatus();

    void nyala();
    void mati();
    virtual void jalan(){}  // pure virtual function untuk metode jalan
};

attributes::attributes(){}  //constructor kelas atribut
attributes::~attributes(){} //destructor kelas atribut

//function member
void attributes::nyala(){
    this->status = true;
}
void attributes::mati(){
    this->status = false;
}

void attributes::setName(string name){ //setter name
    this->name = name;
}
void attributes::setStatus(bool status){ //setter status
    this->status = status;
}
bool attributes::getStatus(){ //getter status
    return this->status;
}
string attributes::getName(){ //getter name
    return this->name;
}
class RobotKRSRI : public attributes  // inheritance 
{
public:
    RobotKRSRI();
    ~RobotKRSRI();

    void jalan();
    void padamkanApi();
    void ambilBoneka();
    void IfTrue(string name);

    void validMessage(string name){         // output work
        cout << " " + name + " Bekerja" << endl;
    }
    void errorMessage(){                        // output error
        cout << "---STATUS ERROR---" << endl;
    }
};

RobotKRSRI::RobotKRSRI():attributes(){}
RobotKRSRI::~RobotKRSRI(){}

void RobotKRSRI::IfTrue(string name){ //implementasi kondisi robot aspek atribut status
    if (RobotKRSRI::getStatus() == true){ //implementasi status robot menyala
        RobotKRSRI::setName(name);
        validMessage(RobotKRSRI::getName());
    }
    else{                               //implementasi status robot mati // ERROR
        errorMessage();
    }  
}

void RobotKRSRI::jalan(){ //implementasi menjalankan robot
    IfTrue("-Robot Berjalan-");
}
void RobotKRSRI::padamkanApi(){ //implementasi memadamkan api
    IfTrue("-Padamkan Api-");
}
void RobotKRSRI::ambilBoneka(){ //implementasi mengambilboneka
    IfTrue("-Ambil Boneka-");
}

#endif

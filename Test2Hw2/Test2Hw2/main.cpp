//
//  main.cpp
//  Test2Hw2
//
//  Created by Dejan Misic on 04/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class Computer{
    
private:
    string manufacturerName;
    double processorSpeed;
    double installedMemory;  // Data member (Variable)
    string motherboardType;       // Data member (Variable)
public:

    // Parameterized Constructor
    Computer(string manName, double cpu, double ram, string mobo);

    //default constructor
    Computer();
    // getters and setters for the properties
    void setManufacturerName(string manName);
    string getManufacturerName(string& manName) const;
    void setProcessorSpeed(double cpu);
    double getProcessorSpeed(double& cpu) const;
    void setInstalledMemory(double ram);
    double getInstalledMemory(double& ram) const;
    void setMotherboardType(string mobo);
    string getMotherboardType(string& mobo) const;
};
Computer::Computer(string manName, double cpu, double ram, string mobo){
    
        manufacturerName = manName;
        processorSpeed = cpu;
        installedMemory = ram;
        motherboardType = mobo;
}
Computer::Computer(){
    manufacturerName ="";
    processorSpeed = 0.0;
    installedMemory = 0.0;
    motherboardType = "";
}
void Computer::setManufacturerName(string manName)
{
    manufacturerName =manName;
}
string Computer::getManufacturerName(string& manuName) const
{
    return manuName = manufacturerName;
}
void Computer::setProcessorSpeed(double cpu){
    processorSpeed = cpu;
}
double Computer::getProcessorSpeed(double& cpus) const
{
    return cpus = processorSpeed;
}
void Computer::setInstalledMemory(double ram){
    installedMemory = ram;
}
double Computer::getInstalledMemory(double& rams) const
{
    return rams = installedMemory;
}
void Computer::setMotherboardType(string mobo){
    motherboardType = mobo;
}
string Computer::getMotherboardType(string& mobos) const
{
    return mobos = motherboardType;
}

int main(int argc, const char * argv[]) {
    string mobos;
    double cpu;
    double ram;
    string manName;
    string mobotw;
    double cputw;
    double ramtw;
    string manNametw;
    // Constructor called
    Computer c2;
    Computer c1("Toshiba",3.3f,6.0f,"Asus");
    // Access values assigned by constructor
    cout << "Manufacturer Name: " << c1.getManufacturerName(manName) << "\nProcessor Speed: " << c1.getProcessorSpeed(cpu) << "\nInstalled Memory: " << c1.getInstalledMemory(ram) << "\nMotherboard Type: " << c1.getMotherboardType(mobos);
    c1.setManufacturerName("\n\nSetter Check: novo ime");
    cout << c1.getManufacturerName(manName);
    c2.setMotherboardType("Dudee");
    c2.setProcessorSpeed(3.3);
    c2.setInstalledMemory(55.5);
    c2.setManufacturerName("Stefan");
        cout << "Manufacturer Name: " << c2.getManufacturerName(manNametw) << "\nProcessor Speed: " << c2.getProcessorSpeed(cputw) << "\nInstalled Memory: " << c2.getInstalledMemory(ramtw) << "\nMotherboard Type: " << c2.getMotherboardType(mobotw  );
    return 0;
}



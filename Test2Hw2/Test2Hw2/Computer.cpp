//
//  Computer.cpp
//  Test2Hw2
//
//  Created by Dejan Misic on 04/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//
#include <iostream>
#include <string>
#include <stdio.h>
#include "Computer.hpp"

using namespace std;

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
void Computer::printComputerInfo(Computer c1){
    string mobos;
    double cpu;
    double ram;
    string manName;
    // Access values assigned by constructor and print computer object information
    cout << "Manufacturer Name: " << c1.getManufacturerName(manName) << "\nProcessor Speed: " << c1.getProcessorSpeed(cpu) << "\nInstalled Memory: " << c1.getInstalledMemory(ram) << "\nMotherboard Type: " << c1.getMotherboardType(mobos) << "\n" << endl;
    
}
void Computer::HomeworkTaskOne(){
    string manName;
    double cpu;
    double ram;
    string mobo;
    //Declaration of computers array by prompting user to enter number of computers
    int computerNumber;
    Computer *computers = 0;

    cout << "Enter the number of computers: ";
    cin >> computerNumber;
    computers = new Computer[computerNumber];
    
    //Entering information about computers
    for(int i=0; i<computerNumber; i++){
        // Prompt user to enter information until it all of computer data is filled for the number of computers
        cout << "\n" << "Enter information about computer " << i+1 << ":" << endl;
        cout << "Enter manufacturer name for computer: ";
        cin >> manName;
        computers[i].setManufacturerName(manName);
        cin.clear();
        cout << "Enter processor speed for computer: ";
        cin >> cpu;
        computers[i].setProcessorSpeed(cpu);
        cin.clear();
        cout << "Enter installed memory for computer: ";
        cin >> ram;
        computers[i].setInstalledMemory(ram);
        cin.clear();
        cout << "Enter motherboard type for computer: ";
        cin >> mobo;
        computers[i].setMotherboardType(mobo);
        cin.clear();
        cout << endl;
    }
    //Outputing computer information
    for(int i=0; i<computerNumber; i++){
        Computer::printComputerInfo(computers[i]);
    }
    //Delete pointer because c++ won't do it for us
    delete []computers;
    
    
}

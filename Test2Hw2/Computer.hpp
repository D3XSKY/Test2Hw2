//
//  Computer.hpp
//  Test2Hw2
//
//  Created by Dejan Misic on 04/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#ifndef Computer_hpp
#define Computer_hpp

#include <stdio.h>
#include <string>
#include <iostream>
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
    void static printComputerInfo(Computer c1);
    void static HomeworkTaskOne();
};
#endif /* Computer_hpp */

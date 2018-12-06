//
//  HomeworkThree.cpp
//  Test2Hw2
//
//  Created by Dejan Misic on 06/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#include "HomeworkThree.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

void HomeworkThree::Task(){
    
    int x;
    int y;
    cout << "Enter first integer: " << endl;
    cin >> x;
    cin.clear();
    cout << "Enter second integer: " << endl;
    cin >> y;
    cin.clear();
    cout << "Memory address of the first integer: " << &x << "\nMemory Address of the second integer: " << &y << endl;
}

//
//  HomeworkTwo.cpp
//  Test2Hw2
//
//  Created by Dejan Misic on 06/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#include "HomeworkTwo.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

void HomeworkTwo::Task(){
    string x;
    string y;
 // getting input
    cout << "Input first string: " <<endl;
    cin >> x;
    cin.clear();
    cout << "Input second string: " << endl;
    cin >> y;
    cin.clear();
    // swapping variables
    swap(x, y);
// outputing result ( swapped variables)
    cout << "First string: " << x << "\n" << "Second string: " << y << endl;
}

//
//  HomeworkFour.cpp
//  Test2Hw2
//
//  Created by Dejan Misic on 06/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#include "HomeworkFour.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

void HomeworkFour::Task(){
    /* A user inputs 10 integers (into a dynamic C++ array).
     Declare two pointers Pmax and Pmin and make them point to max and min values from the array.
     Output min and max values and their memory addresses by using Pmax and Pmin.
     */
    //declaring dynamic array
    int * intArray;
    intArray = new int[10];
    //getting input
    for ( int i =0; i<10; i++)
    {
        cout << "Enter integer: " << endl;
        cin >> intArray[i];
        cin.clear();
    }
    // getting minimum and maximum integer from the intArray
    int * Pmin = 0;
    int * Pmax = 0;
    int n = sizeof(intArray)/sizeof(intArray[0]);
    sort(intArray,intArray+n);
    Pmin = &intArray[0];
    Pmax = &intArray[9];
    cout << "Address of a pointer Pmin: " << Pmin << "\n" << "Address of a pointer Pmax: " << Pmax << endl;
    cout << "Minimum value in an array is: " << *Pmin << "\nMaximum value in the pointer is: " << *Pmax << endl;
    delete[] intArray;
    
}


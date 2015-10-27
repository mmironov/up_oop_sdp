//
//  dynamic_memory.cpp
//  UP_OOP_SDP
//
//  Created by Miroslav Mironov on 10/22/15.
//  Copyright © 2015 Miroslav Mironov. All rights reserved.
//

#include "dynamic_memory.h"
#include <iostream>
using namespace std;

void testDynamicMemory()
{
    int* dynInt = new int;
    
    *dynInt = 10;
    
    cout << *dynInt << endl;
    
    delete dynInt;
    
    int n = 3;
    bool* booleans = new bool[n];
    
    booleans[0] = false;
    booleans[1] = true;
    booleans[2] = true;
    
    delete [] booleans;
    
    Student s;
    s.setGrade(3);
    s.setName("Miroslav");
    
    Student s2 = s;
    s2.setGrade(1);
    s2.setName("Ivan");
    
    Student s3;
    s3 = s;
    s3.setGrade(4);
    s3.setName("Ivan");
    
    s = s;
    
    cout << "Name: " << s.getName() << endl;
    cout << "Grade: " << s.getGrade() << endl;
    
    //no arguments constructor called 3 times
    Student students[3];
    
    Student* dynS = new Student;
    
    dynS->setName("Georgi");
    
    cout << dynS->getName() << endl;
    cout << dynS->getGrade() << endl;
    
    delete dynS;
    
    //automaticlly allocated array of Students
    Student* studentsArr[2];
    
    //dynamically allocated memory for the elements of the array
    studentsArr[0] = new Student;
    studentsArr[1] = new Student;
    
    delete studentsArr[0];
    delete studentsArr[1];
    
    //dynamically allocated array of Student pointers
    Student** dynArray = new Student*[3];
    
    //dynamically allocated memory for the elements of the array
    dynArray[0] = new Student;
    dynArray[1] = new Student;
    
    delete dynArray[1];
    delete dynArray[0];
    
    delete [] dynArray;
    
    ////dynamically allocated array of Students
    Student* arr = new Student[5];
    
    delete [] arr;
}
//
//  student.cpp
//  UP_OOP_SDP
//
//  Created by Miroslav Mironov on 10/23/15.
//  Copyright © 2015 Miroslav Mironov. All rights reserved.
//

#include "student.h"
#include <cstring>
using namespace std;

void Student::copy(const Student& student)
{
    grade = student.grade;
    
    int len = strlen(student.name);
    
    name = new char[len + 1];
    strcpy(name, student.name);
}

void Student::del()
{
    delete [] name;
    name = 0;
}

Student::Student()
{
    grade = 1;
    name = new char[1];
    name[0] = '\0';
}

Student::Student(const Student& student)
{
    copy(student);
}

Student::~Student()
{
    del();
}

Student& Student::operator=(const Student& student)
{
    if (this != &student)
    {
        del();
        copy(student);
    }
    
    return *this;
}

void Student::setGrade(int grade)
{
    this->grade = grade;
}

int Student::getGrade() const
{
    return grade;
}

void Student::setName(const char* name)
{
    delete [] this->name;
    
    int len = strlen(name);
    
    this->name = new char[len + 1];
    strcpy(this->name, name);
}

const char* Student::getName() const
{
    return name;
}
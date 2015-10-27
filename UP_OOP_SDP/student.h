//
//  student.h
//  UP_OOP_SDP
//
//  Created by Miroslav Mironov on 10/23/15.
//  Copyright © 2015 Miroslav Mironov. All rights reserved.
//

#ifndef student_h
#define student_h

class Student {
    int grade;
    char* name;
    
    void copy(const Student& student);
    void del();
public:
    Student();
    Student(const Student& student);
    virtual ~Student();
    
    Student& operator=(const Student& student);
    
    void setGrade(int grade);
    int getGrade() const;
    
    void setName(const char* name);
    const char* getName() const;
};

#endif /* student_h */

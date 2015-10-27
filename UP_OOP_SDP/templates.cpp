//
//  templates.cpp
//  UP_OOP_SDP
//
//  Created by Miroslav Mironov on 10/27/15.
//  Copyright © 2015 Miroslav Mironov. All rights reserved.
//

#include <iostream>
#include "templates.h"
#include "student.h"
#include "box.h"
using namespace std;

char maximum(char x, char y)
{
    cout << x << " " << y << endl;
    return x;
}

void testTemplates()
{
    int x = 5;
    int y = 6;
    
    double a = 2.7;
    double b = 3.5;
    
    cout << "max: " << maximum(x, y) << endl;
    cout << "max: " << maximum(a, b) << endl;
    cout << "max: " << maximum<double>(5, 6) << endl;
    
    maximum('a', 'b');
    
    Box<int> box(100);
    Box<double> realBox(a);
    
//    box = realBox; //compile-time error; incompatible types
    
    cout << box.get() << endl;
    realBox.print();
}
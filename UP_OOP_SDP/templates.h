//
//  templates.h
//  UP_OOP_SDP
//
//  Created by Miroslav Mironov on 10/27/15.
//  Copyright © 2015 Miroslav Mironov. All rights reserved.
//

#ifndef templates_h
#define templates_h

#include <iostream>
using namespace std;

void testTemplates();

template <typename T>
T maximum(T x, T y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

char maximum(char x, char y);

#endif /* templates_h */

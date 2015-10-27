//
//  aliases.cpp
//  UP_OOP_SDP
//
//  Created by Miroslav Mironov on 10/22/15.
//  Copyright © 2015 Miroslav Mironov. All rights reserved.
//

#include "aliases.h"
#include <iostream>
using namespace std;

void testAliases()
{
    int x = 20;
    
    int& y = x;
    
    y = 100;
    
    cout << x << endl;
    
    cout << &x << endl;
    cout << &y << endl;
    
    cout << "Swapping some arguments....\n";
    
    int a = 10;
    int b = 20;
    swapArguments(a, b);
    cout << a << ", " << b << endl;
    
    int* p = &a;
    makeNull(p);
    
    cout << p << endl;
}

void swapArguments(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

void makeNull(int*& ptr)
{
    ptr = 0;
}
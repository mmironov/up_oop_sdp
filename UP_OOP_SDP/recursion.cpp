//
//  recursion.cpp
//  UP_OOP_SDP
//
//  Created by Miroslav Mironov on 10/27/15.
//  Copyright © 2015 Miroslav Mironov. All rights reserved.
//

#include <iostream>
#include "recursion.h"
using namespace std;

void testRecursion()
{
    cout << factorial(5) << endl;
    cout << fibonacci(10) << endl;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    
    return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
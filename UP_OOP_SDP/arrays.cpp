//
//  arrays.cpp
//  UP_OOP_SDP
//
//  Created by Miroslav Mironov on 10/22/15.
//  Copyright © 2015 Miroslav Mironov. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "arrays.h"
using namespace std;

void testArrays()
{
    const int M = 10;
    int array[M] = {};
    
    init(array, M, 10);
    
    const int N = 5;
    int integers[N] = {10, 20, 30, 40, 50};
    
    print(array, M);
    print(integers, N);
}

void print(int array[], int length)
{
    for(int i=0; i < length; ++i)
    {
        cout << array[i] << " ";
    }
    
    cout << endl;
}

void init(int array[], int length, int value)
{
    for(int i=0; i < length; ++i)
    {
        array[i] = value;
    }
}
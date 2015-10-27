//
//  pointers.cpp
//  UP_OOP_SDP
//
//  Created by Miroslav Mironov on 10/22/15.
//  Copyright © 2015 Miroslav Mironov. All rights reserved.
//

#include "pointers.h"
#include <iostream>
using namespace std;

void testPointers()
{
    int x = 20;
    
    int* intPointer = &x;
    
    //the address intPointer is pointing to
    cout << intPointer << endl;
    cout << &x << endl;
    
    //the address of intPointer
    cout << &intPointer << endl;
    
    //the value at the address intPointer is pointing to
    
    if (intPointer != 0)
    {
        cout << *intPointer << endl;
    }
    
    //changing the value through the pointer
    *intPointer = 50;
    cout << x << endl;
    
    cout << endl;
    
    int** pointerToPointer = &intPointer;
    cout << pointerToPointer << endl;
    cout << &pointerToPointer << endl;
    cout << *pointerToPointer << endl;
    cout << **pointerToPointer << endl;
    
    cout << endl;
    
    int a = 10;
    int b = 20;
    
//    int* aPtr = &a;
//    int* bPtr = &b;
    
//    cout << "Outside function: " << &aPtr << endl;
    
    cout << "Swapping.....\n";
    swap(&a, &b);
//    swap(aPtr, bPtr);
    cout << a << ", " << b << endl;
    
    //const pointer
    //cannot be assined new addresses
    int* const ptr = &a;
    //ptr = &b; cannot be done
    *ptr = 40;
    
    const int* p = &a;
    //*p = 100; cannot be done
    p = &b;
}

void swap(int* x, int* y)
{
//    cout << "Inside function: " << &x << endl;
    
    int temp = *x;
    *x = *y;
    *y = temp;
    
    //no effect after swap returns
    x = 0;
}

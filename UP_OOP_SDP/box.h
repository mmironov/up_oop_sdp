//
//  box.h
//  UP_OOP_SDP
//
//  Created by Miroslav Mironov on 10/27/15.
//  Copyright © 2015 Miroslav Mironov. All rights reserved.
//

#ifndef box_h
#define box_h

#include <stdio.h>

template <typename T>
class Box {
    T value;
public:
    Box(const T& value);
    
    T get() const;
    
    void print() const;
};

template <typename T>
Box<T>::Box(const T& value)
{
    this->value = value;
}

template <typename T>
T Box<T>::get() const
{
    return value;
}

template <typename T>
void Box<T>::print() const
{
    cout << value << endl;
}

#endif /* box_h */

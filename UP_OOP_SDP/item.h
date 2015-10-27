//
//  item.h
//  UP_OOP_SDP
//
//  Created by Miroslav Mironov on 10/27/15.
//  Copyright © 2015 Miroslav Mironov. All rights reserved.
//

#ifndef item_h
#define item_h

template <typename T>
struct Item {
    T value;
    Item* next;
};

#endif /* item_h */

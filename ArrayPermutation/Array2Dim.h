//
//  ArrayInt.h
//  ArrayPermutation
//
//  Created by Yoppy Yunhasnawa on 1/5/15.
//  Copyright (c) 2015 Yoppy Yunhasnawa. All rights reserved.
//

#ifndef __ArrayPermutation__ArrayInt__
#define __ArrayPermutation__ArrayInt__

#include <stdio.h>
#include "PermutatedArray2DimList.h"

class Array2Dim
{
public:
    Array2Dim(int length);
    virtual ~Array2Dim();
    void push(int* array1Dim);
    int* array1DimAtIndex(int index);
    int getLength();
    PermutatedArray2DimList* allPermutations();
    void print(int eachElementLength);

private:
    int** array1DimList;
    int length;
    int lastFilledIndex;
};

#endif /* defined(__ArrayPermutation__ArrayInt__) */

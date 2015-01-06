//
//  PermutatedArray2DimList.h
//  ArrayPermutation
//
//  Created by Yoppy Yunhasnawa on 1/5/15.
//  Copyright (c) 2015 Yoppy Yunhasnawa. All rights reserved.
//

#ifndef __ArrayPermutation__PermutatedArray2DimList__
#define __ArrayPermutation__PermutatedArray2DimList__

#include <stdio.h>

class Array2Dim;

class PermutatedArray2DimList
{
public:
    PermutatedArray2DimList(Array2Dim** array2DimList, int permutationCount);
    virtual ~PermutatedArray2DimList();
    Array2Dim** getArray2DimList();
    int getPermutationCount();
    Array2Dim* randomArray2Dim();
    static int factorial(int n);

private:
    Array2Dim** array2DimList;
    int permutationCount;
};

#endif /* defined(__ArrayPermutation__PermutatedArray2DimList__) */

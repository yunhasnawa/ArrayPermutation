//
//  PermutatedArray2DimList.cpp
//  ArrayPermutation
//
//  Created by Yoppy Yunhasnawa on 1/5/15.
//  Copyright (c) 2015 Yoppy Yunhasnawa. All rights reserved.
//

#include "PermutatedArray2DimList.h"

PermutatedArray2DimList::PermutatedArray2DimList(Array2Dim** array2DimList, int permutationCount)
{
    this->array2DimList = array2DimList;
    this->permutationCount = permutationCount;
}

PermutatedArray2DimList::~PermutatedArray2DimList()
{
    
}

Array2Dim** PermutatedArray2DimList::getArray2DimList()
{
    return this->array2DimList;
}

int PermutatedArray2DimList::getPermutationCount()
{
    return this->permutationCount;
}
//
//  main.cpp
//  ArrayPermutation
//
//  Created by Yoppy Yunhasnawa on 1/5/15.
//  Copyright (c) 2015 Yoppy Yunhasnawa. All rights reserved.
//

#include <iostream>
#include "Array2Dim.h"

void printPermutations(PermutatedArray2DimList* pa2d);

int main(int argc, const char * argv[])
{
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    int array3[] = {7, 8, 9};
    
    Array2Dim* array2Dim = new Array2Dim(3);
    
    array2Dim->push(array1);
    array2Dim->push(array2);
    array2Dim->push(array3);
    
    PermutatedArray2DimList* pa2d = array2Dim->allPermutations();
    
    printPermutations(pa2d);
    
    return 0;
}

void printPermutations(PermutatedArray2DimList* pa2d)
{
    Array2Dim** permutatedArray2Dims = pa2d->getArray2DimList();
    
    int permutationCount = pa2d->getPermutationCount();
    
    for(int i = 0; i < permutationCount; i++)
    {
        Array2Dim* array2Dim = permutatedArray2Dims[i];
        
        array2Dim->print(3);
    }
}

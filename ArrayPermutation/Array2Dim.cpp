//
//  ArrayInt.cpp
//  ArrayPermutation
//
//  Created by Yoppy Yunhasnawa on 1/5/15.
//  Copyright (c) 2015 Yoppy Yunhasnawa. All rights reserved.
//

#include "Array2Dim.h"
#include <iostream>
#include <algorithm>

Array2Dim::Array2Dim(int length)
{
    this->length = length;
    
    this->lastFilledIndex = -1; // Still empty at first
    
    this->array1DimList = new int*[this->length];
}

Array2Dim::~Array2Dim()
{
    delete this->array1DimList;
}

int Array2Dim::getLength()
{
    return this->length;
}

void Array2Dim::push(int *array1Dim)
{
    this->lastFilledIndex++;
    
    this->array1DimList[this->lastFilledIndex] = array1Dim;
}

int* Array2Dim::array1DimAtIndex(int index)
{
    return this->array1DimList[index];
}

void Array2Dim::print(int eachElementLength)
{
    std::cout << "-----------------------" << std::endl;
    
    for(int i = 0; i < this->getLength(); i++)
    {
        int* array1Dim = this->array1DimAtIndex(i);
        
        std::cout << "Array #" << i << " -> ";
        
        for(int j = 0; j < eachElementLength; j++)
        {
            int element = array1Dim[j];
            
            std::cout << element;
        }
        
        std::cout << std::endl;
    }
}

PermutatedArray2DimList* Array2Dim::allPermutations()
{
    // First, create the list of all available indexes
    int indexList[this->length];
    
    for(int i = 0; i < this->length; i++)
    {
        indexList[i] = i;
    }
    
    // Then, Create all possible permutations and append to list of Array2Dim objects.
    Array2Dim** permutated2DimList = new Array2Dim*[PermutatedArray2DimList::factorial(this->length)];
    
    int permutationCount = 0;
    
    do
    {
        Array2Dim* permutated2Dim = new Array2Dim(this->length);
        
        for(int i = 0; i < this->getLength(); i++)
        {
            int permutatedIndex = indexList[i];
            
            permutated2Dim->push(this->array1DimAtIndex(permutatedIndex));
        }
        
        permutated2DimList[permutationCount] = permutated2Dim;
        
        permutationCount++;
    }
    while (std::next_permutation(indexList, (indexList + this->length)));
    
    // Save to a class to keep the number of permutations
    PermutatedArray2DimList* pa2d = new PermutatedArray2DimList(permutated2DimList, permutationCount);
    
    return pa2d;
}
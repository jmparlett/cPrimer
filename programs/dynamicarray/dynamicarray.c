// Author: Jonathan Parlett
// Program Name: dynamicarray.c
// Created: 2022-April-22
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
		
#define ll long long int
#define ull unsigned long long int
#define li long int
#define ui unsigned int

typedef struct {
    int *vals;
    int size;     // The number of items stored in our array
    int capacity; // The maximum number of items that can be stored in our array
} dynamicArray;

dynamicArray DynamicArray(){//returns a dynamic array (A constructor basically)
    dynamicArray A;
    A.vals = NULL;
    A.size = 0;
    A.capacity = 0;
    return A;
}

void append(dynamicArray* A, int data){
    if()
}

int main(){


}

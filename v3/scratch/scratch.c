// Author: Jonathan Parlett
// Program Name: scratch.c
// Created: 2022-May-30
#include <stdio.h>
#include <unistd.h>
#include <string.h>
		
#define ll long long int
#define ull unsigned long long int
#define li long int
#define ui unsigned int





int main(){
int A[3] = {4,5,6};
printf("Val of base pointer A = 0x%x\n", A);
printf("____________________________________\n");
for(int i=0; i < 3; i++){
printf("*(A+%d) = %d | ", i, *(A+i));
printf("A[%d] = %d | ", i, A[i]);
printf("Address of value at (A+%d) = 0x%x\n", i, (A+i));
}
// The size of an int is 4 bytes
printf("Size of integer = %lu\n", sizeof(int));
// The size of a char is a single byte
printf("Size of char = %lu\n", sizeof(char));
// The size of any pointer is 8 bytes, no matter the type it points to.
printf("Size of int* = %lu\n", sizeof(int*));
printf("Size of char* = %lu\n", sizeof(char*));
}

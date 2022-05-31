// Author: Jonathan Parlett
// Program Name: scratch.c
// Created: 2022-May-18
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include<stdlib.h>
#include<stdint.h>
		
#define ll long long int
#define ull unsigned long long int
#define li long int
#define ui unsigned int

int dummy(){
    int i = 10;
    return i;
}
int main(){

    uint64_t x = 24;
    uint64_t r = 24%(uint64_t)(x+0.5);
    printf("%lld\n", r);
    printf("%lld\n", (uint64_t)(x+0.5));
}
// Author: Jonathan Parlett
// Program Name: scratch.c
// Created: 2022-May-18
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include<stdlib.h>
		
#define ll long long int
#define ull unsigned long long int
#define li long int
#define ui unsigned int

typedef struct {
    char* name;
    int age;
    int height;
}person ;

int main(){
    person* p = malloc(sizeof(person));
    (*p).age = 5;
    printf("%d\n", (*p).age);
}
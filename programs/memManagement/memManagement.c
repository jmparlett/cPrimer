// Author: Jonathan Parlett
// Program Name: memManagement.c
// Created: 2022-April-22
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
		
#define ll long long int
#define ull unsigned long long int
#define li long int
#define ui unsigned int

void printBin(ll i){
  printf("0b"); 
  for(int j=sizeof(i)*8-1; j >= 0 ; j--){
    printf("%d", i&(1<<j) ? 1 : 0);
  }
  printf("\n");
}

void snip1(){
  //produce a seg fault by dereferencing void
  int* i = NULL;

  printf("What is NULL? %d\n", i);
  printf("What is the value at NULL? %d\n", *i);

}


void snip2(){
  
  int* A = malloc(sizeof(int)*5); //array or 5 ints

  //lets populate our array
  for(int i=0; i < 5; i++)
    //we can use index notation for arrays and pointers
    A[i]=i*2;


  for(int i=0; i < 5; i++)
    //Or we can use addition+dereference
    printf("%d ",*(A+i));

  printf("\n");
}


int main(){

  // snip1();
  snip2();
}

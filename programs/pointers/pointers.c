// Author: Jonathan Parlett
// Program Name: pointers.c
// Created: 2022-April-22
#include <stdio.h>
#include <unistd.h>
#include <string.h>
		
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

  int* i=0;
  int j=0;

  printf("Value of Int ptr: %d\n",i);
  printf("Value of Int: %d\n",j);

  i += 2; //increment ptr
  j += 2*sizeof(int); //increment integer 

  printf("Value of Int ptr: %d\n",i);
  printf("Value of Int: %d\n",j);

  printf("Value of Int ptr: %d\n",i);
}

void snip2(){

  int A[5] = {6,7,8,9,10};

  printf("Val of base pointer A = 0x%x\n", A);

  printf("________________________________________________________\n");
  for(int i=0; i < 5; i++){
    printf("*(A+%d) = %d | ", i, *(A+i));
    printf("A[%d] = %d | ", i, A[i]);
    printf("Address of value at (A+%d) = 0x%x\n", i, (A+i));
  }
}

int main(){


}

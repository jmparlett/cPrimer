// Author: Jonathan Parlett
// Program Name: cPrimer.c
// Created: 2022-March-21
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

void sc1(){

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

int main(){

  sc1(); 
  unsigned long int p;

  printf("sizeof of p: %lu bytes\n", sizeof(p));

  int i = 10;

  int *j = &i;

  printf("sizeof of j: %lu bytes\n", sizeof(j));

  p = &i;

  printf("Pointer Val: %llu: Value at address specified by ptr %d\n", j, *j);

  //we're going tell C that the integer p is actually an int ptr then dereference it
  printf("64bit Int Val %llu: Value at address specified by 64bit val %d\n", p, *((int*) p));

  //incing a pointer incs it by the size of its type, incing a int just adds 1
  printf("64bit Int Val when increased as an int %lu\n", (p+1));
  printf("64bit Int Val when increased as an int* %lu\n", ((int *)p) + 1);
}

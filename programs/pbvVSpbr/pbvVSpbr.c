// Author: Jonathan Parlett
// Program Name: pbvVSpbr.c
// Created: 2022-April-22
#include <stdio.h>
#include <unistd.h>
#include <string.h>
		
#define ll long long int
#define ull unsigned long long int
#define li long int
#define ui unsigned int

void boring(int i){
  i += 5;
  printf("Val of i in function: %d\n", i);
}

void snip1(){
  int i = 6;
  printf("Val of i before function call: %d\n", i);
  boring(i);
  printf("Val of i after function call: %d\n", i);

}

void boring2(int* i){//now we take a pointer
  *i += 5; //dereference and assign
  printf("Val of i in function: %d\n", *i);
}

void snip2(){
  int i = 6;
  printf("Val of i before function call: %d\n", i);
  boring2(&i); //using (&) to pass a pointer
  printf("Val of i after function call: %d\n", i);
}

void squareArr(int* arr, int n){//takes array and its size

  while(n--){//recall anything nonzero is true
    //value at ptr times equals value at pointer
    *arr *= *arr; 
    //increment pointer by 1
    arr++;
  }
  printf("Val of pointer (arr) in function after loop: 0x%x\n",arr);
}
void snip3(){

  //we can omit the size when statically assigning, it will be inferred
  int arr[] = {1,2,4,6,7};

  printf("Val of pointer (arr) before function call: 0x%x\n",arr);

  printf("array before function call: ");
  for(int i=0; i < 5; i++) printf("%d ",arr[i]);
  printf("\n");

  squareArr(arr, 5);

  printf("Val of pointer (arr) after function call: 0x%x\n",arr);
  printf("array after function call: ");
  for(int i=0; i < 5; i++) printf("%d ",arr[i]);
  printf("\n");

}

int main(){

  // snip1();
  // snip2();
  snip3();

}

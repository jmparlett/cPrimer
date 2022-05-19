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
    int *I;         //list of values
    int size;       //num things in list
    int capacity;   //max num of things in list
} list;

list* List(){
    list* L = malloc(sizeof(list));
    L->capacity = 0;
    L->size = 0;
    L->I = NULL;
    return L;
}

void resize(list* L, size_t newCap){
    L->I = realloc(L->I, sizeof(int) * newCap);
    // int *newI = malloc(sizeof(int) * newCap);

    // //copy from old I to newI
    // for(int j = 0; j < L->size; j++){
    //     newI[j] = L->I[j];
    // }

    // free(L->I);

    // L->I = newI;
}

void append(list* L, int data){
    if( L->size == L->capacity){
        L->capacity = 2 * (L->capacity + 1);
        resize(L, L->capacity);
    }
    L->I[L->size] = data;

    L->size++;
}

void printList(list* L){
    printf("size: %d capacity: %d\n", L->size, L->capacity);
    printf("items: ");
    for(int i=0; i < L->size; i++) printf("%d ", L->I[i]);
    printf("\n");
}

void delete(list* L){
    free(L->I);
    free(L);
}

int main(){

    list* L = List();

    printList(L);

    for(int i = 0; i < 100; i++){
        append(L, 5*i);
        printList(L);
    }

    delete(L);
}
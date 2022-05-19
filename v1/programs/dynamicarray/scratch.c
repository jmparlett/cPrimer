// Author: Jonathan Parlett
// Program Name: scratch.c
// Created: 2022-May-18
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include<stdlib.h>
		
#define ll long long int
#define ull unsigned long long int
#define li long int
#define ui unsigned int


typedef struct {
    int *I;
    int size;
    int capacity;
} list;

list* List(){
    list* L = malloc(sizeof(list));
    L->size = 0;
    L->capacity = 0;
    L->I = NULL;

    return L;
}

void resize(list* L, int newCap){
    // printf("newCap: %d\n", newCap);
    L->I = realloc(L->I, newCap*sizeof(int));
    // int *newI = malloc(sizeof(int)*newCap);

    // //copy from old list to new
    // for(int j=0; j < L->size; j++){
    //     newI[j] = L->I[j];
    // }

    // free(L->I);

    // L->I = newI;
}

void append(list* L, int data){
    if (L->size == L->capacity){
        L->capacity = 2*(L->capacity+1);
        resize(L, L->capacity);
    }
    L->I[L->size] = data;

    L->size++;
}

void delete(list* L){
    free(L->I);
    free(L);
}

void printList(list* L){
    printf("List size: %d capacity: %d\n", L->size, L->capacity);
    printf("List Items: ");
    for(int i = 0; i < L->size; i++) printf("%d ", L->I[i]);
    printf("\n");
}

int main(){

    list* L = List();

    // printList(L);
    // append(L,1);
    // printList(L);

    for(int i = 0; i < 100; i++){
        append(L, i + 22*17);
        printList(L);
    }

    delete(L);
}
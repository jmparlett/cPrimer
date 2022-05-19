# A Primer on C

## Pointers

### What is Pointer?

A pointer is a 64bit integer, thats it. The value of that integer specifies a byte of memory.
```c
int *i;

printf("This pointer currently points to address %x in memory\n", i);
```
The actual value will be random because the pointer is unitialized, but the output will look something like
```
"This pointer currently points to address 0xfffffce in memory"
```

What is special about a pointer is the semantics that the C language attachs to it. This is related to the type system.

Each type in C has a set size in bytes, which we can look at and print using the `sizeof(type)` function. This function given a type returns
the size of said type in bytes as a `long unsigned int = size_t`. Its important to note these sizes may vary from physical system to physical system,
but these are the most common values.
```c
printf("Size of integer = %lu\n", sizeof(int));                             //prints 4 (4 bytes = 32 bits)
printf("Size of long integer = %lu\n", sizeof(long int));                   //prints 8
printf("Size of unsigned long integer = %lu\n", sizeof(unsigned long int)); //prints 8
printf("Size of size_t = %lu\n", sizeof(size_t));                           //prints 8
printf("Size of char = %lu\n", sizeof(char));                               //prints 1
```
Since a ptr (any pointer, of any type) is just a 64 bit integer the size of a ptr is 8 bytes no matter the type it points to. Remember it just specifies
a memory location.
```c
//these will all print 8
printf("Size of int* = %lu\n", sizeof(int*));
printf("Size of char* = %lu\n", sizeof(char*));
printf("Size of char** = %lu\n", sizeof(char**)); //what structure is described by char** ?
```

### Pointer Semantics
We can say that pointer of a given `type` is really the start of a sequence of `sizeof(type)` bytes. By inspecting these bytes we can get a value of `type`.

For example if we have an `int*` and we look at the 4 bytes starting the value specified by out ptr then we will say those 4 bytes represent the value of an integer.

```c
int* i = 0xff00; //so from 0xff00 to 0xff04 we have an integer

*i = 100; //in the 4 bytes starting at 0xff00 store the binary value of 100
```

So when we dereference a pointer we are getting the value of the `sizeof(type)` bytes starting at the address referenced by the pointer. Another caveat however is that ptr doesn't need to reference just a single int. We may want to use it to inspect a bunch of integers that are all stored next to each, like in an array.

To this end C lets you increment a pointer. It wouldn't be very useful if incrementing a pointer only increased its value by 1 for every type however. For example if it was an integer pointer then we would still be using part of the previous int and a single byte of the next in a row. This is most likely not what we intended.

Instead incrementing a pointer of a given type increases it by the size of said type.
```c
int* i = 0;

i += 1;

//Remember sizeof(int) = 4 so incrementing an int* increases it by 4

printf("i = %x\n", i); //prints 4

i += 1;

printf("i = %x\n", i); //prints 8
```

## Malloc, Realloc and Free

## Arrays

## 2D Arrays (Array of strings)

## Pass by Value, Pass by reference, returning structs

## Importance of sketching solutions

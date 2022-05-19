First and foremost, it might help to explain why we do dynamic memory management. For that, explaining that there are two major memory blocks: stack and heap. Allocating variables as "int x; int array[10];" etc, would allocate memory in the stack which is only accessible within the scope of the function that we are in, and gets destroyed (i.e., made inaccessible) by the operating system. Plus, we cannot allocate a memory block from here whose size we do not know at the time of coding. As for the heap, this is where "dynamic"ally allocated memory is taken from. This portion of the memory is dedicated to the requests of the user (i.e., programmer) and an allocated memory from this portion keeps dedicated until the program terminates (i.e., is not bound by scope of a function). An advantage of this memory portion is that, we can allocate as many consecutive memory as we want (as long as it is available), and it is our (i.e., programmer) responsibility to maintain (i.e., access, modify, free) any memory block that we requested.
Put an emphasis on the question of "What is the difference between C arrays and dynamically allocated consecutive memory blocks?" Arrays are allocated in the stack, while dynamically allocated memory resides in the heap. We can resize a dynamically allocated memory, free it, reallocate it, etc. while we don't have these luxuries for the array that inherently resides in the stack.

# Why do we do dynamic memory management?
- allocating things in local scope is limited
- we cannot shrink or grow structures that use memory from the operating system they are always a fixed size


## A Dynamic Array Implementation

# Stack Vs Heap
# Outline
1. talk about memory structure overall, with stack and heap

    - The operating system allocates memory for programs. This is where all variables and data structures you create are stored.
    
    - The memory is segmented, different programs have access to different segments.
    
    - When a program attempts to access another programs memory a segmentation fault occurs and the program is terminated.

    - The memory for an individual program is separated into the **Stack** and the **Heap**. The **Heap** memory space is the one you control. The **Stack** is controlled by the operating system.

2. Then talk about static vs dynamic memory, when you'd like to use each

    - Higher vs lower level languages. C allows for more control while demanding more programmer overhead. Python and Java have systems that manage memory for you, but lose out on performance as a result.
    
    - **Static** memory is managed by the operating system and it uses the **Stack** memory space. It is handled much like memory in a higher level language is handled. It is allocated when you declare arrays and variables in C and it is reclaimed when these variables fall out of scope.

    - **Dynamic** memory is managed by you. It lies on the **Heap**. You control when it is allocated, and when it is reclaimed. When you want to have structures that grow and shrink you must use dynamic memory. Consider lists in Python. These are structures that hold an arbitrary and not predetermined number of elements. How would you implement this with static arrays? You couldn't. You must use dynamic memory.

    ```python
    from sys import getsizeof as size
    l = []
    size(l)
    l.append(1)
    size(l)
    l.append(1)
    size(l)
    ```
    Output
    ```
    56
    88
    88
    ```


3. Then start talking about dynamic memory, and start talking about pointers as tools to access these memory locations that we allocate dynamically. At this point, first explain malloc (not free yet), and then talk about pointer arithmetic of increasing pointers, referenceing, dereferenceing etc.

    - Discuss pointers. Conceptual Bob points to McDonalds. C pointers. A pointer is a memory address, which is simply a number. An int pointer tells us where an integer is on the heap (draw a diagram of memory, single box notation).

    - Memory can be seen as a table of memory locations. A pointer indexes us into this table, (draw heap memory).

    - Malloc. How do we get a pointer that points to an integer on the heap.

    - Pointer operations
        - address of (&)
        - dereference (*) get the thing inside the box
        - addition (+) integers stored consecutively in memory, we can increment our pointer to make it point to the next in line. (Draw this).

    - explain address of a pointer, and that pointer variables are still beholden to scope.

    - Arrays are pointers. Draw an array of integers using single box notation, and demonstrate their equivalence using the operations above, in code. 

    - Brief aside, explain memory can be described as table of 2^64 rows. A pointer is an integer that indexes us into this table, it is a single 64 bit integer value. Go back to the array example and expand each cell into 4 memory locations. Explain that the pointer has the integer value that refers to the first in the row, and that incrementing by the type size actually causes it to point to the start of the next integer. When you dereference a int pointer your actually looking at the 4 bytes starting at the address of the pointer. This can be aided by printing the value of the pointer in the array example.

    - Explain free and why its important. Explain that you cant free static memory and you cannot malloc memory for dynamic arrays.

4. The rest is the same: you talk about allocate/reallocate, free, structs etc.

    - proceed to dynamic array example. 

    - pass by reference / pass by value

    - problem solving (plan before you implement)
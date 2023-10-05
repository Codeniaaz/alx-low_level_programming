malloc() (Memory Allocation):

malloc() stands for "memory allocation."
It is used to allocate a block of memory of a specified size in bytes.
The memory allocated by malloc() is uninitialized, meaning it may contain garbage values.
Returns a pointer to the first byte of the allocated memory or NULL if allocation fails.
It's important to call free() to release the memory when it's no longer needed to avoid memory leaks.
calloc() (Contiguous Allocation):

calloc() stands for "contiguous allocation."
It is used to allocate a block of memory for an array of elements, each of a specified size.
Unlike malloc(), calloc() initializes the allocated memory to zero.
Takes two arguments: the number of elements and the size of each element in bytes.
Returns a pointer to the first byte of the allocated memory or NULL if allocation fails.
It's also essential to call free() to release the memory allocated by calloc() when it's no longer needed.
realloc() (Reallocate Memory):

realloc() stands for "reallocate memory."
It is used to resize or reallocate a previously allocated block of memory.
Takes two arguments: a pointer to the previously allocated memory block and the new size in bytes.
It can be used to expand or shrink the size of the memory block.
If successful, it returns a pointer to the resized memory block. If not, it returns NULL.
It's essential to handle the return value carefully, as it may change if reallocation fails, and the original memory block may still need to be freed using free().
free() (Free Memory):

free() is used to deallocate memory previously allocated by malloc(), calloc(), or realloc().
It takes a single argument, which is a pointer to the memory block to be released.
After calling free(), the pointer becomes invalid, and accessing it can lead to undefined behavior.
Deallocating memory with free() is crucial to prevent memory leaks and manage system resources efficiently.
In summary, these functions are fundamental for memory management in C and C++. malloc(), calloc(), and realloc() are used to allocate memory, while free() is used to release allocated memory when it's no longer needed. Proper use of these functions helps prevent memory-related issues like leaks and improves the efficiency of your programs.

AUTOMATIC AND DYNAMIC ALLOCATION, MALLOC AND FREE

Automatic Allocation: When you declare variables or when you use strings within double quotes,the program is taking care of all memory allocation.
Dynamic Allocation: Malloc: The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and wirte permissions.
The malloc funtion is used to allocate a certain amount of memory during execution of a program. The prototype of malloc is; void *malloc(size_t size);

Free Function: When you are using malloc, ypu have to handle the memory yourself, you have to keep track of all the addresses of the allocated memory, you have to deallocate every memory space you previously allocated. Protorype;void free(void *ptr);
where ptr is the address of the memory space previously allocated by and returned by a call to malloc.

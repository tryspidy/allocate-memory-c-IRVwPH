// Use malloc to allocate memory
ptr = (castType*) malloc(size);
int *exampl = (int*) malloc(sizeof(int));
// Use calloc to allocate and inizialize n contiguous blocks of memory
ptr = (castType*) calloc(n, size);
char *exampl = (char*) calloc(20, sizeof(char));
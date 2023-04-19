#include <stdlib.h>
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* all function prototypes for FUNCTION POINTERS TASK declared here*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));


#endif /* FUNTION_POINTERS_H */

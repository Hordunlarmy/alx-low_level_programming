#include "main.h"


char *_strcat(char *dest, const char *src) {
    char *p = dest;
    while (*p) { // find the end of dest
        p++;
    }
    while (*src) { // concatenate src to dest
        *p++ = *src++;
    }
    *p = '\0'; // add the null terminator to the end of the concatenated string
    return dest;
}

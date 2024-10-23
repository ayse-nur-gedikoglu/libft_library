#include "stdlib.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
        i++; 
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*psuedo:
    ilk dizi tanımı
    ikinci dizi tanımı

    while
*/
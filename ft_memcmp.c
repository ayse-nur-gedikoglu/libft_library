#include "stdlib.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char* ps1;
    unsigned char* ps2;
    size_t i;
    
    ps1 = (unsigned char*)s1;
    ps2 = (unsigned char*)s2;

    i = 0;
    while (i < n)
    {
        if (ps1[i] != ps2[i])
            return (ps1[i] - ps2[i]);
        i++;
    }
    return (0);
}
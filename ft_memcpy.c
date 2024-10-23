#include "libft.h"

void *memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *pdest;
    const unsigned char *psrc;

    pdest = (unsigned char*)dest;
    psrc = (unsigned char*)src;
    i = 0;

    if (!dest && !src)
        return (pdest);
    while (n >= 0)
    {
        dest[i]=src[i];
        i++;
    }
    return (pdest);
}

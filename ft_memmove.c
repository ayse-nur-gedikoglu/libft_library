#include "libft.h"

void *memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *pdest;
    const unsigned char *psrc;

    psrc = (unsigned char*)src;
    pdest = (unsigned char*)dest;
    i = len -1;

    if (!dest && !src)
        return (pdest);
    if ()
    {   
        while (pdest>psrc)
        {
            pdest[i]=psrc[i];
            i--;
        }
    }
    else
        ft_memcpy(pdest,psrc, len);
    return (pdest);
}

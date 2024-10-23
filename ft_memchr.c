#include "stdlib.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char* src;
    size_t = i;
    
    src = (unsigned char*) s;
    c = (unsigned char)c; 
    i = 0;
    while (i < n)
    {
        if (s[i] == c)
        {
            return ((void*)(src +i));
        }
        i++;
    }
    return (0);
}
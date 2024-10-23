#include "libft.h"

char *strchr(const char *str, int c)
{
    char *s;

    s = (char*)s;
    if (!str)
        return(NULL);
    while (*str != (char)c)
    {
        s++;
    }
    return (s);    
}
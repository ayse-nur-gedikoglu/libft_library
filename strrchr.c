#include "libft.h"

char *strrchr(const char *str, int c)
{
    if (str == NULL) 
        return (NULL);  
    char *s;
    s = (char*)str + strlen(str)-1;
    if (c == '\0') 
        return s;
    while (s >= str)
    {
        if (*s == (char)c)
            return (s);
        s--;   
    }    
    return (NULL);    
}
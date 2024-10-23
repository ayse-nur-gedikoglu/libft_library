#include "libft.h"

void *calloc(size_t num, size_t size)
{
    void* array;

    array = (char*)malloc(size * num); 
    if (!array)
        return (NULL);
    return (ft_memset(array, 0, size * num));
}

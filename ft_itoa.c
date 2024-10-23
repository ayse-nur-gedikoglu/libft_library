#include "libft.h"

static unsigned int numb_len(int c)
{
    unsigned int i;

    if (c == 0)
        return(1);
    if (c < 0)
        i++;
    while (c != 0)
    {
        c = c / 10;
        i++
    }
    return (i);
}

char *ft_itoa(int n)
{
    unsigned int number;
    unsigned int numb_l;
    char* str;

    numb_l = numb_len(n);
    str = (char*)malloc(sizeof(char)*(numb_l + 1))
    if (str == NULL)
        return (NULL);
    if (number < 0)
    {
       str[0] = "-";
       number = -n;
    }
    else
        number = n;
    if (number == 0)
        str[0]='0';
    str[numb_l]= '\0'
    while (number != 0)
    {
        str[numb_l - 1] = (number % 10) + '0';
        number/= 10;
        numb_len--;
    }
    return (str);
}

//integerı stringe çevirir
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char a;

    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    else if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    
    if (n < 10)
    {
        a = n + '0';
        write(fd, &a, 1);
    }
    else
    {
        ft_putnbr_fd(n / 10, fd);
        a = (n % 10) + '0';
        write(fd, &a, 1);
    }
}

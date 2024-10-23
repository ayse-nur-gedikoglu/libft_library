#include "stdlib.h"

void to_uppercase(unsigned int index, char *c);

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    if (!s || !f)
        return;
    while (s[i])
    {
        (*f)(i, s + i); // Hem index 'i' hem de 's + i' yani adresi fonksiyona gönderiyoruz.
        i++;

    }
}
void to_uppercase(unsigned int index, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int main(void)
{
    char str[] = "hello world!";
    ft_striteri(str, to_uppercase);
    printf("%s\n", str);  // "HELLO WORLD!" yazdırır
    return 0;
}
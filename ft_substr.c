char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *sub;
    
    sub = (char*)malloc(size of(char)*(len +1))
    if (sub == 0)
        return(NULL);
    while (s[i])
    {
        if (i >= start && j < len)
        {
            sub[j] = s[i];
            j++;
        }
        i++;
    }
    sub[j] = '\0';
    return (sub);
}
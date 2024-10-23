char *ft_strtrim(char const *s1, char const *set)
{
   int i;
   int j;
   char* str;

   str = 0; //sonrasında malloc kullanılmasının sebebi 
   //işlem sonrasında ne kadar yer kaplayacağımızı bilebilecek olmamız
   if (s1 != 0 && set != 0)
   {
        i = 0;
        j = ft_strlen(s1);
        while (s1[i] && ft_strchr(set, s1[i]))
            i++;
        while (s1[j - 1] && ft_strchr(set, s1[j - 1]) )
            j--;

        str=(char*)malloc(sizeof(char*)*(j - i + 1));
        if (str)
        {
           ft_strncpy(str, &s[i], j - i);
           str[j - i]= '\0';
        }
   }
   return (str);
}

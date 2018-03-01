int ft_strlen(char *str);

char *ft_strrev(char *str) {
   char c;
   int i = 0;
   int len = ft_strlen(str) - 1;
    while(i <= len - i) {
        c = str[i];
        str[i] = str[len - i];
        str[len - i] = c;
        i++;
    }
    return str;
}
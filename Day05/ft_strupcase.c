char    *ft_strupcase(char *str) {
    char *temp = str;

    while(*temp != '\0') {
        if(*temp >= 'a' && *temp <= 'z') {
            *temp -= 32;
        }
        temp++;
    }

    return str;
}
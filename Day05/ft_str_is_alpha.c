int ft_strlen(char * str) {
    int i;

    i = 0;
    while(str[i] != '\0') {
        i++;
    }

    return i;
}

int ft_str_is_alpha(char *str) {
    int i;

    i = 0;

    while(str[i] != '\0' && (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')) {
        i++;
    }

    if(i == ft_strlen(str)) {
        return 1;
    }

    return 0;
}
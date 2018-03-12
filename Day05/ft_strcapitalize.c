char    ft_toUpper(char c) {
    if(c >= 'a' && c <= 'z') {
        c -= 32;
    }
    return c;
}

char    ft_toLower(char c) {
    if(c >= 'A' && c <= 'Z') {
        c += 32;
    }
    return c;
}

int ft_isalnum(char c) {
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
        return 1; 
    }
    return 0;
}

int ft_isUpper(char c) {
    if(c >= 'A' && c <= 'Z') {
        return 1;
    }
    return 0;
}

char    *ft_strcapitalize(char *str) {
    int i = 0;

    while(str[i] != '\0') {
        if(!ft_isalnum(str[i - 1])) {
            str[i] = ft_toUpper(str[i]);
        }
        if(ft_isalnum(str[i - 1]) && ft_isUpper(str[i])) {
            str[i] = ft_toLower(str[i]);
        }
        i++;
    }
    return str;
}
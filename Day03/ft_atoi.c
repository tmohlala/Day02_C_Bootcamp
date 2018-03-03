int ft_isdigit(char c) {
    if(c >= '0' && c <='9') {
        return 1;
    }
    return 0;
}

int ft_sign(char c) {
    if(c == '-') {
        return -1;
    }
    return 1;
}

int ft_atoi(char *str) {
    int nb = 0;
    int sign;

    while(*str == ' ' || *str == '\r' || *str == '\t' || *str == '\n' || *str == '\f') {
        str++;
    }
    if((sign = ft_sign(*str)) == -1) {
        str++;
    }
    while(ft_isdigit(*str)) {
        nb = (*str - '0') + 10 * nb;
        str++;
    }
    return (nb * sign);
}
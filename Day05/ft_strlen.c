//
// Created by kingh on 2018/06/07.
//

int ft_strlen(char * str) {
    int i;

    i = 0;
    while(str[i] != '\0') {
        i++;
    }

    return i;
}
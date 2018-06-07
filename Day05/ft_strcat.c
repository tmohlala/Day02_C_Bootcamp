//
// Created by kingh on 2018/06/07.
//

int ft_strlen(char * str);

char *ft_strcat(char *dest, char *src) {
    int i;
    int j;
    i = 0;
    j = ft_strlen(dest);

    while(src[i] != '\0') {
        dest[(j - 1) + i] = src[i];
        i++;
    }
    dest[i] = src[i];

    return dest;
}

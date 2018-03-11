char    ft_toUpper(char c) {
    if(c >= 'a' && c <= 'z') {
        c -= 32;
    }
    return c;
}

int ft_isAlpha(char c) {
    if(c >= 'a' && c <= 'z') {
        return 1; 
    }
    return 0;
}

char    *ft_strcapitalize(char *str) {
    int i = 0;

    while(str[i] != '\0') {
        if(!ft_isAlpha(str[i - 1])) {
            str[i] = ft_toUpper(str[i]);
        }
        i++;
    }
    return str;
}

#include <stdio.h>
int main() {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));
}
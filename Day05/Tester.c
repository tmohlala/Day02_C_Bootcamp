//
// Created by kingh on 2018/05/27.
//

#include <stdio.h>
#include <string.h>
//int ft_str_is_numeric(char* str);
char *ft_strcat(char *dest, char *src);

int main() {
    char src[] = " is a test";
    char dest[] = "This ";
    printf("strcat: %s ft_strcat: %s\n", strcat(dest, src), ft_strcat(dest, src));
    //printf("%d\n", ft_str_is_numeric(""));
}
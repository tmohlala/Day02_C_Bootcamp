#include <stdlib.h>

char    *ft_strstr(char *str, char *to_find) {
    char *temp = NULL;
    char *strt = NULL;

    if(!*to_find) {
        return str;
    }
    
    while(*str != '\0') {
        if(*str == *to_find) {
            strt = str;
            temp = to_find;
            while(*strt == *temp && *temp != '\0') {
                strt++;
                temp++;
            }
            if(!*temp) {
                return str;
            }
        }
        str++;
    }
    
    return NULL;
}
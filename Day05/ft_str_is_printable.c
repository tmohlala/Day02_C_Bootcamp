//
// Created by kingh on 2018/06/07.
//

int ft_str_is_printable(char *str) {
    int i;
    i = 0;

    while(str[i] != '\0') {
        if(!(str[i] >= 32 && str[i] <= 126)) {
            return false;
        }
    }

    return 1;
}


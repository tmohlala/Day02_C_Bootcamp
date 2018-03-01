#include <unistd.h>

void ft_putchar(char c);

int main() {
    char c = 'z';

    while(c >= 'a') {
        ft_putchar(c);
        c--;
    }
}